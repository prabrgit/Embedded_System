#include <SPI.h>
byte address = 0x11;     // you need to send a command byte followed by the data byte. The command byte has the format "00CC00PP" where the CC gives command summary and PP gives the Pot selection. CC of 01 is "write data byte to potentiometer" and PP of 01 is "execute command on pot 0". This gives 00010001, which would be the decimal value of 17.
int CS= 9;
int i=0;

void setup()
{
  pinMode (CS, OUTPUT);
  SPI.begin();
  // adjust high and low resistance of potentiometer
  // adjust Highest Resistance .
   digitalPotWrite(0x00);
   delay(1000);

      // adjust  wiper in the  Mid point  .
   digitalPotWrite(0x80);
   delay(1000);

   // adjust Lowest Resistance .
   digitalPotWrite(0xFF);
   delay(1000);
}

void loop()
{
    for (i = 0; i <= 255; i++)
    {
      digitalPotWrite(i);
      delay(10);
    }
    delay(500);
    for (i = 255; i >= 0; i--)
    {
      digitalPotWrite(i);
      delay(10);
    }
}

int digitalPotWrite(int value)
{
  digitalWrite(CS, LOW);
  SPI.transfer(address);
  SPI.transfer(value);
  digitalWrite(CS, HIGH);
}
