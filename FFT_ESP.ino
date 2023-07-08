#include <Arduino.h>


void setup() {
  Serial.begin(230400);
  
 
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
  
  
  delay(1500);  // wait for serial port to initialize
  Serial.write((uint8_t)8);
  Serial.write((uint8_t)2);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  Serial.write((uint8_t)0);
  //Serial.println("FINISH");
  
  
}



