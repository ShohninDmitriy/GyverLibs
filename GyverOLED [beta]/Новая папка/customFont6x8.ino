#define OLED_SOFT_BUFFER_64
#define OLED_EXTFONTS
#include <GyverOLED.h>
GyverOLED oled;
extern uint8_t ExtFont6x8[];
int x = -8, y;

void setup() {
  oled.init(OLED128x64);
  oled.clear();
  oled.home();
  oled.setFont(ExtFont6x8);

  for (int i = 32; i <= 126; i++) {
    x = x + 8;
    if (x >= 128) {
      x = 0;
      y += 9;
    }
    oled.setCursor(x, y);
    oled.printChar(i);
  }
  oled.update();
}

void loop() {
  
}
