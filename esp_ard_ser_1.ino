byte data1 = 1;
byte data2 = 2;

void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(230400);
}

void loop() {
  Serial.println("1");
  delay(1000);
  Serial.println("2");
  delay(1000);

}

