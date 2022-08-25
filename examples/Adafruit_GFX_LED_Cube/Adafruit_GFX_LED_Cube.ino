#include "GFX_LED_Cube.h"
LEDCube myCube;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Code has started");
  Serial.flush();

  myCube.begin();
  myCube.setCursor(0, 0);
  myCube.setTextColor(4096);
  myCube.setTextSize(1);
  myCube.print('1');
  myCube.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
