#include "lgfx.h"
#include <Arduino.h>

#define PIN_LED1 12
#define PIN_LED2 13

LGFX tft;

void inline blinkLEDs() {
  digitalWrite(PIN_LED1, HIGH);
  digitalWrite(PIN_LED2, LOW);
  delay(1000);
  digitalWrite(PIN_LED1, LOW);
  digitalWrite(PIN_LED2, HIGH);
  delay(1000);
}

void setup() {
  Serial.begin(115200);
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  tft.init();
  tft.setBrightness(10);
  tft.fillScreen(TFT_BLACK);

  tft.setTextFont(4);
  tft.drawCenterString("Hello World", 80, 8);
  tft.setTextColor(TFT_PINK);
  tft.drawCenterString("Some World2", 80, 40);
  tft.drawRoundRect(0, 0, 240, 320, 12, TFT_YELLOW);
}

void loop() { blinkLEDs(); }