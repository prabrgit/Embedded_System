int PWM_Pin = 11; /* give PWM_Pin name to D3 pin */
// Perform initialization inside setup()
void setup()
{
pinMode(PWM_Pin,OUTPUT);  /*declare D3 pin as an output pin */ 
}
// loop() executes continously 
void loop()
{
  for(int i=0; i<220; i++){
  analogWrite(PWM_Pin,i);  /* Produce 50% duty cycle PWM on D3 */
  delay(100);
  }
for(int i=220; i>0; i--){
  analogWrite(PWM_Pin,i);  /* Produce 50% duty cycle PWM on D3 */
  delay(100);
  }

}