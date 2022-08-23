#include "GFX_LED_Cube.h"
LEDCube myCube;

void setup() {
  // put your setup code here, to run once:
  myCube.begin();
  myCube.drawPixel(0, 0, 65535);
  myCube.drawPixel(0, 1, 58);
  myCube.setDepth(2);
  myCube.drawPixel(0, 2, 65535);
  myCube.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
