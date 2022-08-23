#ifndef __ADAFRUIT_GFX_CUBE_H__
#define __ADAFRUIT_GFX_CUBE_H__

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>

#define PIN1        6 // Connected to D6
#define PIN2        7 // Connected to D7
#define PIN3        8 // Connected to D8
#define NUMPIXELS 	64 // How many LEDs there are on one layer
#define LAYERS		3

class LEDCube : public Adafruit_GFX {
	public:
	LEDCube();

  	void begin(void);
  	void clear(void);
  	void display(void);
  	void drawPixel(int16_t x, int16_t y, uint16_t color);
	void setDepth(int _d);
	
	private:
	Adafruit_NeoPixel *pixels[8];
	int _depth = 0;
};

#endif