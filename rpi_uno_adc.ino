/*
  Arduino Slave for Raspberry Pi Master
  i2c_slave_ard.ino
  Connects to Raspberry Pi via I2C
  
  DroneBot Workshop 2019
  https://dronebotworkshop.com
*/

// Include the Wire library for I2C
#include <Wire.h>

// LED on pin 13
const int ledPin = 9; 
int sensorPin = A0;   // select the input pin for the potentiometer
int digitalValue = 0;  // variable to store the value coming from the sensor
float analogVoltage = 0.00;

void setup() {
  // Join I2C bus as slave with address 8
  Wire.begin(0x8);
  Serial.begin(9600);
  
  // Call receiveEvent when data received                
  Wire.onReceive(receiveEvent);
  
  // Setup pin 13 as output and turn LED off
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

// Function that executes whenever data is received from master
void receiveEvent(int howMany) {
  
    digitalValue = analogRead(sensorPin);// read the value from the analog channel
    Serial.print("digital value = ");
    Serial.print(digitalValue);        //print digital value on serial monitor
    //convert digital value to analog voltage
    analogVoltage = (digitalValue * 5)/1023.00;
    Serial.print("  analog voltage = ");
    Serial.println(analogVoltage);
    delay(1000);
  }


void loop() {
  delay(100);
}
