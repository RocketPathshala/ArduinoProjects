/* This exaple has Light dependent resistor(LDR).
it reads and display the analog value of the LRD sensor on serial monitor */
const int ledpin=13;
const int ldrpin=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(ldrpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrStatus=analogRead(ldrpin);
if (ldrStatus<100) 
{
  digitalWrite(ledpin,HIGH);
  Serial.println("LDR is Dark,LED is ON");
}
else
{
  digitalWrite(ledpin,LOW);
  Serial.println("LED is OFF");
}

}
