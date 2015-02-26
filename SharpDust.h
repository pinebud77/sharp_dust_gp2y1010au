#ifndef __SHARP_DUST_H
#define __SHARP_DUST_H

#define SAMPLING_TIME	280
#define DELTA_TIME		40
#define SLEEP_TIME		9680

class SharpDustClass
{
	private:
		int ledPin;			//Digital pin for LED power
		int measurePin; 	//Analog pin for measurement
		
	public:
		void begin(int led, int mea);
		float measure(void);
}

extern SharpDustClass SharpDust;
#endif	//__SHARP_DUST_H