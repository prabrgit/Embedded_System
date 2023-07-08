void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop() {
int var = Serial.read();
 if(var>0){
 Serial.println(var);
 if (var==53){
  while(Serial.read()!= 54){
     blinkled();
 }
}
}
}

void blinkled(){
  
   digitalWrite(13, HIGH);
   Serial.println("LED ON");
   delay(2000);
   digitalWrite(13, LOW);
   Serial.println("LED OFF");
   delay(2000);
}
