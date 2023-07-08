int incomingByte = 0; // for incoming serial data

void setup() {
  Serial.begin(230400); // opens serial port, sets data rate to 9600 bps
 
  //Serial.println(10);
  //delay(20000);
   // write an array

 // Serial.print(12000);
  
  //Serial.println('\n');
  
  
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
     // read the incoming byte:
    incomingByte = Serial.read();
    //Serial.print(incomingByte);
    //Serial.write(incomingByte);
    //Serial.print("-> ");
    //Serial.println(incomingByte);
    if (incomingByte == '1'){
      // byte buf[] = {8, 1, 0, 0, 0};
       //Serial.print(81000, BIN);
       Serial.write(incomingByte);
    }

    // say what you got:
    //Serial.print("I received: ");
    //Serial.println(incomingByte);
  }
}