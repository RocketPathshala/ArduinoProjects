/*  The code consits of displaying the XY sensor value in LCD display. 
//This code was created at CAXYZGEN LABS BANGALORE //

 * LCD RS pin to digital pin 8
 * LCD Enable pin to digital pin 9
 * LCD D4 pin to digital pin 10
 * LCD D5 pin to digital pin 11
 * LCD D6 pin to digital pin 12
 * LCD D7 pin to digital pin 13
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VDD pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * LCD VO pin to ground

When the joystick sensor moves on the x,y axiz 
-x ,-y axis then corresponding reading is fetch on Serial monitor which is on Top right. 
Thank You
*/


#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13; //Initilising pins for LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int JoyStick_X = A0; // x sensor pins
int JoyStick_Y = A1; // y sensor pins
int JoyStick_Z = A2; // button

void setup ()
{                                         // Initilize the pin mode for X,Y,Z
  pinMode (JoyStick_X, INPUT);
  pinMode (JoyStick_Y, INPUT);
  pinMode (JoyStick_Z, INPUT);
  Serial.begin (9600); // 9600 bps        // setting baud rate od 9600  
  lcd.begin(16,2);                        // Set LCD in (COLOUMS X ROWS) 
}
void loop ()
{
  int x, y, z;
  x = analogRead (JoyStick_X);            // set sensor value to x,y,z
  y = analogRead (JoyStick_Y);
  z = analogRead (JoyStick_Z);
 
  Serial.print(" X axis = ");                
  Serial.print (x, DEC);                 
  Serial.print("       Y axis = ");
  Serial.print (y, DEC);               
  Serial.print("       Button  value = ");
  Serial.print (z, DEC);                  
  lcd.clear();
  lcd.setCursor(0,0);                     // Seting cursor value
  lcd.print("X axis is =");
  lcd.print(x);
  lcd.setCursor(0,1);
  lcd.print("Y axis is =");
  lcd.print(y);
  
  
 
  delay(100);                               
  if(z == 0)
  { 
  Serial.print(" BUTTON is PRESSED");
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("BUTTON is PRESED");
  lcd.setCursor(0,1);
  lcd.print("Z axis is =");
  lcd.print(z);
  delay(1000);
  }
  Serial.println(); // start a new line
  delay (100);
}
