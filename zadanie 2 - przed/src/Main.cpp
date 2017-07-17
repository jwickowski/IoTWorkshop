#include <Arduino.h>

#define LED 00 //D3
#define BUTTON_TOP 02 //D4

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_TOP, INPUT);
  previousButtonState = digitalRead(BUTTON_TOP);
  digitalWrite(LED, LOW);
}

void loop()
{
  
}