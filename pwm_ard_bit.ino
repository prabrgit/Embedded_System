int PWM_Pin = 3; /* give PWM_Pin name to D3 pin */
// Perform initialization inside setup()
void setup()
{
pinMode(PWM_Pin,OUTPUT);  /*declare D3 pin as an output pin */ 
TCCR2B = TCCR2B & B11111000 | B00000111;
 /*set 30.64Hz Frequency */
}
void loop()
{
for(int i=0; i<220; i++){
  analogWrite(PWM_Pin,i);  /* Produce 50% duty cycle PWM on D3 */
  delay(100);
}
TCCR2B = TCCR2B & B11111000 | B00000111;
}