#include "LedWheel.h"

LedWheel::LedWheel(int setRedPin, int setGreenPin, int setBluePin, int setColor) {
  // Constructor; inits vars and state

    redPin = setRedPin;
    greenPin = setGreenPin;
    bluePin = setBluePin;

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    currentColor = setColor;
  }


  void LedWheel::Update() {
    // Call periodically to change color

    currentColor = (currentColor + 1) % 6;
    switch (currentColor) {
      case 0: setLedColor(128, 0, 0); break; // red
      case 1: setLedColor(128, 128, 0); break; // yellow
      case 2: setLedColor(0,128,0); break;  // green
      case 3: setLedColor(0,128,128); break; // aqua
      case 4: setLedColor(0,0,128); break;  // blue
      case 5: setLedColor(128,0,128); break; // purple
    }
  }

