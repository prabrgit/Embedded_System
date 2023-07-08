void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int state = Serial.available();
  if  
  
  
    if (state == 53){
      Serial.println("hi");
      blinkled();
    }
    if (state==54){
      Serial.println("Bye");
    }
  
    }
    
  

void blinkled(){
   digitalWrite(13, HIGH);
   Serial.println("LED ON");
   delay(500);
   digitalWrite(13, LOW);
   Serial.println("LED OFF");
   delay(500);
}
