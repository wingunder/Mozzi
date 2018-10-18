#ifndef MOZZI_H_
#define MOZZI_H_

class Mozzi
{
public:
	struct stereo_t { int left; int right; };
	typedef struct stereo_t StereoStruct_t;

	Mozzi(int audioRate, int controlRate, bool runFlag = true, bool monoFlag = true) :
		_audioRate(audioRate), _controlRate(controlRate), _runFlag(runFlag), _monoFlag(monoFlag)
	{}

	virtual ~Mozzi() {}

	int getAudioRate() const { return _audioRate; }
	int getControlRate() const { return _controlRate; }
	bool isRunning() const { return _runFlag; }
	bool isMono() const { return _monoFlag; }

protected:
	virtual void loop(int) = 0;
	virtual void start() { _runFlag = true; }
	virtual void stop() { _runFlag = false; }
	virtual StereoStruct_t updateAudio() = 0;
	virtual void updateControl() = 0;

private:
	const int _audioRate;
	const int _controlRate;
	bool _runFlag;
	const bool _monoFlag;
};

#endif
