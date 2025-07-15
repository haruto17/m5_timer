#include <M5Core2.h>

void setup()
{
  M5.begin();
  M5.Lcd.setTextSize(4);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.println("Hello World!");
}

void loop()
{
}