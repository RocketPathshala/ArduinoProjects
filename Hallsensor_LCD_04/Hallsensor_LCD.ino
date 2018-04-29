/* This program uses Magnetic sensor of KY003 .  
 * When the magnetic feild is arround the sensor then the sensor senses and led light will be ON.
   The LCD Pins are-
   LCD RS pin to digital pin 8
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
*/
#include <LiquidCrystal.h>
int Led = 3 ; // define LED Interface
int SENSOR = 2 ; // define the Hall magnetic sensor interface
int val ; // define numeric variables val
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

   
void setup ()
{
  
  Serial.begin(9600);
  lcd.begin(16,2);
 
  pinMode (Led, OUTPUT) ;    // define LED as output interface
  pinMode (SENSOR, INPUT) ;  // define the Hall magnetic sensor line as input

}
 
void loop ()
{
// ------------------magnetic sensor-------------------- 
  val = digitalRead (SENSOR) ; // read sensor line
  Serial.println(val);
  delay(100);
  if (val == HIGH) // when the Hall sensor detects a magnetic field, Arduino LED lights up  
  
  {
 digitalWrite (Led, LOW);
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("ITS SAFE TO");
 lcd.setCursor(0,2);
 lcd.print(" DISPOSE GARBAGE ");
 lcd.setCursor(12,2);
 delay(100);
// lcd.print(val);   

  } 

  else if (val == LOW)
  {

digitalWrite (Led, HIGH);
 Serial.println(val);
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("ALERT MAGNETIC!!! ");
 lcd.setCursor(0,1);
 lcd.print("MATERIAL INSIDE ");
 lcd.setCursor(12,2);
 delay(100);
 //lcd.print(val); 

    
  }


}

