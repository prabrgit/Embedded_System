/*
 * Copyright (c) 2018, circuits4you.com
 * All rights reserved.
 * 
 * ESP32 DAC - Digital To Analog Conversion Example
 */
#include <driver/adc.h>
#define DAC1 25
#define DAC2 26

void setup() {
  Serial.begin(115200);
  adc1_config_width(ADC_WIDTH_BIT_12);
  adc1_config_channel_atten(ADC1_CHANNEL_6,ADC_ATTEN_DB_11);
  adc1_config_channel_atten(ADC1_CHANNEL_4,ADC_ATTEN_DB_11);
  
}

void loop() { // Generate a Sine wave
   for (int deg = 0; deg < 360; deg = deg + 10){
    dacWrite(25, int(128 + 80 * (sin(deg*PI/180)))); // Square
    dacWrite(26, int(128 + 80 * (sin(deg*PI/180)+sin(3*deg*PI/180)/3+sin(5*deg*PI/180)/5+sin(7*deg*PI/180)/7+sin(9*deg*PI/180)/9+sin(11*deg*PI/180)/11)));
  int val1 = adc1_get_raw(ADC1_CHANNEL_4);  
  int val = adc1_get_raw(ADC1_CHANNEL_6);  //delay(100);
   Serial.print("Sine");
  Serial.print(":");
  Serial.print(val);
  Serial.print(",");
  Serial.print("Square");
  Serial.print(":");
  Serial.println(val1);
  
}
}