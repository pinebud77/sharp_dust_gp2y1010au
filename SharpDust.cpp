#include "SharpDust.h"

SharpDustClass::begin(int led, int mea)
{
	ledPin = led;
	measurePin = mea;
	
	pinMode(ledPin, OUTPUT);
	digitalWrite(ledPin, HIGH);
}

float SharpDustClass::measure(void)
{
	float voMeasured = 0;
	float calcVoltage = 0;
	
	digitalWrite(ledPin, LOW);
	delayMicroseconds(SAMPLING_TIME);
	
	voMeasured = analogRead(measurePin);
	
	delayMicroseconds(DELTA_TIME);
	digitalWrite(ledPin, HIGH);
	delayMicroseconds(SLEEP_TIME);
	
	calcVoltage = voMeasured * (5.0 / 1024.0);
	
	return 0.17 * calcVoltage - 0.1;
}

SharpDustClass SharpDust;