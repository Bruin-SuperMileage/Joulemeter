// Voltage Divider Constants
const double RC = 10000*0.0000001; // voltage divider time constant: 10k ohms and 0.1uF
const int R1 = 10000; // 10k ohm
const int R2 = 1000; // 1k ohm
const unsigned short DELAY_TIME = 4 * RC * 1e6; // in microsecnods

// Pins
const int RES_DIVIDER = 4; // D4, Measure_V on the schematic
const int M_VOLTAGE = A0; // A0, M_BatVoltage on schematic
