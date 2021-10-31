#include <constants.h>

void setup() {
	pinMode(RES_DIVIDER, OUTPUT);
	pinMode(M_VOLTAGE, INPUT);  
}

void loop() {
	// read voltage
	// read current
	// dynamically set gains
	// sum proudct with time
	// delay by a known time
}



void updateGains() {
	// check if we're out of bounds of current gains
	// update the gain profile by writing to the pins
	// restart the device by throwing LOW then HIGH after a time delay specified in teh data sheet
}

double readCurrent() {
	// communicating via SPI with the ADC
}

float readVoltage() {
	unsigned short delay_time = 4 * RC * 1e6; // in microsecnods
	digitalWrite(RES_DIVIDER, HIGH);
	delayMicroseconds(delay_time);

	float Vout = digitalRead(M_VOLTAGE) * (5.0 / 1024);

	return Vout * (R1 + R2) / (R2);
}
