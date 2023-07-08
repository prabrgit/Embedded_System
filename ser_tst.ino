int incomingByte = 0; // for incoming serial data

void setup() {
  Serial.begin(230400); // opens serial port, sets data rate to 9600 bps
  //byte buf[] = {B00000001, B00000010, B00000000, B00000000, B00000000};
  //Serial.write(buf, 5); // write an array
  //Serial.println('\n');
  
  
}

void loop() {
  Serial.write(0x01);
}