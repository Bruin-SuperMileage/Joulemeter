
void setup() {
  
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

int readVoltage() {
	
}
void reset() {
  // Jessy's function 
  if (current <= 30)
    digitalWrite(7,LOW)
    digitalWrite(8,LOW)
  else if (current <=40)
    digitalWrite(7,LOW)
    digitalWrite(8,HIGH)
  else if (current <=50)
    digitalWrite(7,HIGH)
    digitalWrite(8,LOW)
  else if (current <=60)
    digitalWrite(7,HIGH)
    digitalWrite(8,HIGH)
}