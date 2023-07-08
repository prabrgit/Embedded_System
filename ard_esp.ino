void setup() {
  pinMode(2,OUTPUT);
  pinMode(16,OUTPUT);
  Serial.begin(230400);
  
  Serial.println("Start");
  digitalWrite(2, LOW);
  delay(3000);
  digitalWrite(2, HIGH);
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readString();
    data.trim();
    //String STR1 = "ON";
    //String STR2 = "OFF";
    Serial.print("You sent me: ");
    Serial.println(data);
    if(data == "1"){
      digitalWrite(2, LOW);
      
      
    }
    if(data == "2"){
      
      digitalWrite(2, HIGH);
      
    }
      
    
    // if(STR2.equals(data)){
    //  digitalWrite(13, LOW);
    //  delay(1000);
    // }
  }
}

