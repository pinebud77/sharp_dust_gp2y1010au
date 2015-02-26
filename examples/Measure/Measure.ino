#include <SharpDust.h>

#define DUST_LED_PIN		2
#define DUST_MEASURE_PIN	0

void setup() {
  Serial.begin(9600);

  SharpDust.begin(DUST_LED_PIN, DUST_MEASURE_PIN);
}

void loop() {
  while (1) {
    Serial.print(F("Dust :"));
    Serial.print(SharpDust.measure());
    Serial.println(F(" mg/m^3"));
    delay(1000);
  }
}
