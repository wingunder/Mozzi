#define CONTROL_RATE 50

#include <MozziGuts.h>        // at the top of your sketch

void setup() {
  startMozzi(CONTROL_RATE);
}

void updateControl() {
  // your control code
}

int updateAudio() {
  // your audio code which returns an int between -244 and 243
  // actually, a char is fine
  return 0;
}

void loop() {
  audioHook(); // fills the audio buffer
}
