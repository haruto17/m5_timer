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
  M5.update();

  if (M5.BtnA.wasReleased())
  {
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(0, 0);
    M5.Lcd.println("Button A was released!");
  }
  else if (M5.BtnB.wasReleased())
  {
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(0, 0);
    M5.Lcd.println("Button B was released!");
  }
  else if (M5.BtnC.wasReleased())
  {
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(0, 0);
    M5.Lcd.println("Button C was released!");
  }
}