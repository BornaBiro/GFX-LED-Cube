#include <avr/pgmspace.h>
#include <stdlib.h>

#include "Adafruit_GFX.h"
#include "GFX_LED_Cube.h"

LEDCube::LEDCube() : Adafruit_GFX(8, 8)
{
	
}

void LEDCube::begin(void)
{
	Adafruit_NeoPixel *pixels1 = new Adafruit_NeoPixel(NUMPIXELS, PIN1, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels2 = new Adafruit_NeoPixel(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels3 = new Adafruit_NeoPixel(NUMPIXELS, PIN3, NEO_GRB + NEO_KHZ800);
	
	pixels[0] = pixels1;
	pixels[1] = pixels2;
	pixels[2] = pixels3;
	
	for (int i = 0; i < LAYERS; i++)
	{
		pixels[i]->begin();
	}
}

void LEDCube::clear(void)
{
	for (int i = 0; i < LAYERS; i++)
	{
		for (int j = 0; j < NUMPIXELS; j++)
		{
			pixels[i]->setPixelColor(j, 0);
		}
	}
}

void LEDCube::display(void)
{
	for (int i = 0; i < LAYERS; i++)
	{
		pixels[i]->show();
	}
}

void LEDCube::drawPixel(int16_t x, int16_t y, uint16_t color)
{
	int16_t _x0 = (_depth % 2 == 0 ? (3 - x) : x);
	pixels[y]->setPixelColor((_depth * 4) + _x0, color);	
}

void LEDCube::setDepth(int _d)
{
	_depth = _d;
}