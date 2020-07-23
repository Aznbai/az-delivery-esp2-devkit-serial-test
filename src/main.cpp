// tested with  esp32 doit-devkit-v1 and az-delivery-devkit-v4 (esp32)
// note that az-delivery-devkit-v4 (esp32) has no built in led on 2

#include <Arduino.h>
// int LED_BUILTIN = 2;
void setup()
{
  // pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}
void loop()
{
  Serial.println("can you see this?!");

  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(1000);
  // digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}