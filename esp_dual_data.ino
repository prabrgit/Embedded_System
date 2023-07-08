#include <Arduino.h>


void setup() {
  Serial.begin(230400);
   xTaskCreatePinnedToCore (
    loop2,     // Function to implement the task
    "loop2",   // Name of the task
    1000,      // Stack size in bytes
    NULL,      // Task input parameter
    0,         // Priority of the task
    NULL,      // Task handle.
    0          // Core where the task should run
  );
}
 





void loop() {
  
  
  
  delay(3000);  // wait for serial port to initialize
  Serial.write((uint8_t)1);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0); 
  delay(3000);  // wait for serial port to initialize
  Serial.write((uint8_t)1);
  Serial.write((uint8_t)1);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0); 
  
 delay(3000);  // wait for serial port to initialize
 Serial.write((uint8_t)1);
  Serial.write((uint8_t)2);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0); 
  
 delay(3000);
  Serial.write((uint8_t)8);
  Serial.write((uint8_t)2);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0); 
  //Serial.println("FINISH");
  delay(1000);
 
  Serial.write((uint8_t)8);
  Serial.write((uint8_t)1);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0); 
  
  
  delay(1000);  // wait for serial port to initialize
  Serial.write((uint8_t)8);
  Serial.write((uint8_t)2);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  //Serial.println("FINISH");
  
  
}


void loop2 (void* pvParameters) {
  while (1) {
    if (Serial.available() > 0) {
    // read the incoming byte:
    byte incomingByte;
    incomingByte = Serial.read();
    // say what you got:
    //Serial.println("START");
    Serial.println(incomingByte, HEX);
    //Serial.println("END");
  }
  }
}


