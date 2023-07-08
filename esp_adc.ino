#include <driver/adc.h>

// Input is connected to GPIO 34 (Analog ADC1_CH6) 
const int potPin = 34;
static const adc_channel_t channel = ADC_CHANNEL_6;

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(230400);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  adc1_config_width(ADC_WIDTH_BIT_12);
  adc1_config_channel_atten(ADC1_CHANNEL_6,ADC_ATTEN_DB_11);
  int val = adc1_get_raw(ADC1_CHANNEL_6);  //delay(100);
  Serial.println(val);
}