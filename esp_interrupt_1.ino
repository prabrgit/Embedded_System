const int interruptPin = 5;
const int opin = 4;

void ICACHE_RAM_ATTR isr() {
  Serial.println("Interrupt");
  digitalWrite(opin, HIGH);
}

void setup() {
 Serial.begin(230400);
 pinMode(2,OUTPUT);
 digitalWrite(2, HIGH);
 pinMode(opin,OUTPUT); 
 pinMode(interruptPin,INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(interruptPin), isr, FALLING);
}



void loop() {
  Serial.println("loop start");
  digitalWrite(opin, HIGH);
  delay(3000);
  digitalWrite(opin, LOW);
  delay(3000);
  Serial.println("loop end");
}
