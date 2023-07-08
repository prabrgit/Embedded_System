
byte incomingByte ;
const int BUFFER_SIZE = 10264;
char buf[BUFFER_SIZE];

void setup() {
  Serial.begin(230400);
  // put your setup code here, to run once:

}

void loop() {
  
  
  Serial.flush();
  if (Serial.available() > 0) {
    
    
    int rlen = Serial.readBytes(buf, BUFFER_SIZE);
    
    for(int i = 0; i < rlen; i++){
      Serial.print(buf[i],HEX);
      Serial.print(",");
    }
  }

}
