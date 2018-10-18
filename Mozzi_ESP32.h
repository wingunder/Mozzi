#ifndef MOZZI_ESP32_H_
#define MOZZI_ESP32_H_

#include <Mozzi.h>
#include <freertos/FreeRTOS.h>
#include <driver/i2s.h>
#include <cstring> // memset

#ifdef MOZZI_ESP32_DEBUG
#include <freertos/task.h> // xTaskGetTickCount
#endif

class Mozzi_ESP32 : public Mozzi
{
 public:
	Mozzi_ESP32(int audioRate,
				int controlRate,
				const i2s_bits_per_sample_t& bits_per_sample = I2S_BITS_PER_SAMPLE_16BIT,
				const i2s_port_t& port = I2S_NUM_0,
				bool runFlag = true,
				bool monoFlag = true) :
		Mozzi(audioRate, controlRate, runFlag, monoFlag),
		_bufCnt(2),
		_bits_per_sample(bits_per_sample),
		_word_size((_bits_per_sample == I2S_BITS_PER_SAMPLE_16BIT) ? 2 : 4),
		_write_buff_size(_word_size * audioRate / controlRate),
		_write_buff((uint8_t*)calloc(_write_buff_size, sizeof(uint8_t))),
		_audioBias(0x80),
		_port(port)
	{
		init();
		if (runFlag) {
			start();
		}
	}

	~Mozzi_ESP32() {
		if (isRunning()) {
			stop();
		}
		free(_write_buff);
	}

	void loop(int cnt = 0) {
		size_t bytes_written;
#ifdef MOZZI_ESP32_DEBUG
		unsigned long lastTickCount = xTaskGetTickCount();
		unsigned long total_bytes_written = 0;
		int updateControlCnt = 0;
		int updateAudioCnt = 0;
#endif
		int loopCnt = 0;
		while (cnt <= 0 || cnt < loopCnt) {
			updateControl();
			for (int i=_word_size-1; i<_write_buff_size; i+=_word_size) {
				Mozzi::StereoStruct_t data = updateAudio();
				_write_buff[i] = data.right + _audioBias;
			}
			int ret = i2s_write(_port, _write_buff, _write_buff_size, &bytes_written, portMAX_DELAY);
			if (ret == ESP_OK) {
			}
			else if (ret == ESP_FAIL) {
			}
			else {
			}
			if (cnt > 0) {
				loopCnt++;
			}
#ifdef MOZZI_ESP32_DEBUG
			updateControlCnt++;
			updateAudioCnt += _write_buff_size / _word_size;
			total_bytes_written += bytes_written;
			if (total_bytes_written >= getAudioRate() * _bufCnt || _write_buff_size != bytes_written) {
				const unsigned long currentTickCount = xTaskGetTickCount();
				const double rate = double(total_bytes_written) * configTICK_RATE_HZ / (_word_size * (currentTickCount - lastTickCount));
				lastTickCount = currentTickCount;
				printf("Wrote %d bytes (_write_buff_size=%d), rate=%f, total=%lu, cc=%d , ac=%d\n",
					   bytes_written, _write_buff_size, rate, total_bytes_written, updateControlCnt, updateAudioCnt);
				total_bytes_written = 0;
				updateControlCnt = 0;
				updateAudioCnt = 0;
			}
#endif
		}
	}

	virtual void start() {
		memset(_write_buff, 0, _write_buff_size);
		Mozzi::start();
	}

	virtual void stop() {
		Mozzi::stop();
		memset(_write_buff, 0, _write_buff_size);
	}

	virtual Mozzi::StereoStruct_t updateAudio();
	virtual void updateControl();

private:
	void init()
	{
		i2s_config_t i2s_config = {
			.mode = I2S_MODE_MASTER | I2S_MODE_TX | I2S_MODE_DAC_BUILT_IN,
			.sample_rate = getAudioRate(),
			.bits_per_sample = _bits_per_sample,
			.channel_format = I2S_CHANNEL_FMT_RIGHT_LEFT,
			.communication_format = I2S_COMM_FORMAT_I2S_MSB,
			.intr_alloc_flags = 0,
			.dma_buf_count = _bufCnt,
			.dma_buf_len = int(_write_buff_size / _word_size),
			.use_apll = false,
			.fixed_mclk = 0,
		};
		i2s_driver_install(_port, &i2s_config, 0, NULL);
		i2s_set_clk(_port, getAudioRate(), _bits_per_sample, I2S_CHANNEL_MONO);
		i2s_zero_dma_buffer(_port);
		i2s_set_dac_mode(I2S_DAC_CHANNEL_RIGHT_EN);
	}

	const int _bufCnt;
	const i2s_bits_per_sample_t _bits_per_sample;
	const size_t _word_size;
	const size_t _write_buff_size;
	uint8_t* _write_buff;
	const int _audioBias;
	const i2s_port_t _port;
};

#endif
