/*This example is to on a LED using a Switch */

const int ledPin=2;
const int switchPin=8;
void setup()
{
  pinMode(switchPin,INPUT);
  pinMode(ledPin,OUTPUT);
  
}
void loop()
{
  if (digitalRead(switchPin)==HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
else
{ 
  digitalWrite(ledPin,LOW);
}
}

