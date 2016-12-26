#ifndef LEDWHEEL_H
#define LEDWHEEL_H

class LedWheel
{
    // Rotates led through color wheel

    // Changes to next color each time called

    private:
    // Params, initialized at startup
      int redPin;
      int greenPin;
      int bluePin;

    // State variables
      int currentColor; // 0 to 5

    public:
      LedWheel(int setRedPin, int setGreenPin, int setBluePin, int setColor);
      void Update();
};

#endif