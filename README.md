# Neopixel Christmas Tree

This plays light patterns on an LED Christmas tree on an ugly holiday sweater.
The tree lights are made of Adafruit Neopixel strips and the tree star is a
single RGB LED (not a Neopixel LED).

## Unique project Aspects
* Uses the FastLED library to drive the Neopixels for a more even HSV color
wheel
* LED patterns are coded for multitasking and can be overlaid
* LED patterns are broken out into separate sketch tabs
* Star pattern is broken out into a separate object with .h file

## Tree construction
The tree lights are four strips:

* 5 lights on the top row
* 8 lights on the 2nd row
* 10 lights on the 3rd row
* 12 lights on the bottom row
