int incomingByte = 0; // for incoming serial data

void setup() {
  Serial.begin(230400); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  delay(5000);
  byte buf[] = {8, 1, 0, 0, 0};
  Serial.write(buf, 5);
  if (Serial.available() > 0) {
    
    // read the incoming byte:
    incomingByte = Serial.read();

    
  }
}