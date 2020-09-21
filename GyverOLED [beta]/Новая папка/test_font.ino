#define OLED_SOFT_BUFFER_64
#define OLED_EXTFONTS
#include <GyverOLED.h>
GyverOLED oled;
extern uint8_t ExtFont6x8[];
void setup() {
  oled.init(OLED128x64);
  oled.setFont(ExtFont6x8);
}

void loop() {
  oled.setCursor(20, 0);
  oled.print("f*ck da COVID-19");
  oled.setCursor(35, 15);
  oled.print("Hi World!");
  oled.setCursor(10, 30);
  oled.print("My name is 'Alex'");
  oled.setCursor(0, 45);
  oled.print("- @ # $ ; % ^ : * ( ) { } [ ] | @ < > , . ? ` ~ _ = +");
  oled.update();
}
