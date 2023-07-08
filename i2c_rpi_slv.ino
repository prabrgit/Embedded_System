void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(230400);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(2, HIGH);
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    String STR1 = "1";
    String STR2 = "2";
    Serial.print("You sent me: ");
    Serial.println(data);
    if(STR1.equals(data)){
      digitalWrite(2, HIGH);
      delay(1000);
      digitalWrite(2, LOW);
      delay(1000);
    }
    else{
    Serial.println("FINISH");  
      
    }
    // if(STR2.equals(data)){
    //  digitalWrite(13, LOW);
    //  delay(1000);
    // }
  }
}

