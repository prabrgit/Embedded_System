#include <Wire.h>
byte val ;
void setup() {
  Wire.begin();
}

void loop() {
    Wire.begin();  // Transmit to device number 44 (0x2C)
    val = 0;
    Wire.write(val);
    val = 1;
    Wire.write(val);
    Wire.endTransmission();      // Stop transmitting
}