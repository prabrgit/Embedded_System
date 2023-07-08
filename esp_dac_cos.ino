/*
  ESP32 DAC - Waveform Library Experiment
  espdac-wave-library.ino
  ESP32 DAC Waveform Library Demo
  Outputs a Cosine Wave
  Uses DacESP32 Library - https://github.com/yellobyte/DacESP32
  
  DroneBot Workshop 2022
  https://dronebotworkshop.com
*/

// Include DacESP32 Library
#include <DacESP32.h>
#include <driver/adc.h>

// Create DAC object
DacESP32 dac1(GPIO_NUM_25);

void setup() {
  Serial.begin(115200);
  adc1_config_width(ADC_WIDTH_BIT_12);
  adc1_config_channel_atten(ADC1_CHANNEL_6,ADC_ATTEN_DB_11);

  // Output a Cosine Wave with frequency of 1000Hz and max. amplitude (default)
  dac1.outputCW(10);

  // Wait 5 seconds before changing amplitude
  delay(5000);
}

void loop() {

  dac1.setCwScale(DAC_CW_SCALE_8);
  int val = adc1_get_raw(ADC1_CHANNEL_6);  //delay(100);
   Serial.println(val);
  
}