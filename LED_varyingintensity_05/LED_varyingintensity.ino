//This example is to switch on and off LED by increasing and decreasing the brightness//

int timer=60;
void setup() {
  // put your setup code here, to run once:

for (int pin=2;pin<=8;pin++)
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: TO INCREAMENT LIGHT
  
for (int pin=2; pin<=8; pin++)
{
digitalWrite(pin,HIGH);
delay(timer);
digitalWrite(pin,LOW);
}
    // FOR DECREMENT LIGHT

for(int pin=10; pin>=2; pin--)
{
  digitalWrite(pin,HIGH);
  delay(timer);
  digitalWrite(pin,LOW);
  
  }
}


