/* This program works for switiching mutiple LED using an App called Aurdino bluetooth App.
* The code is developed at CAXYGEN LABS Bangalore
* Coder -Mr. Mahendra Chavan
*/
char data = 0;            //Variable for storing received data
void setup()
{
    Serial.begin(9600);   //Sets the baud for serial data transmission                               
    pinMode(13, OUTPUT);  //Sets digital pin 13 as output pin
    pinMode(12, OUTPUT);  //Sets digital pin 12 as output pin
    pinMode(9, OUTPUT);  //Sets digital pin 11 as output pin
    pinMode(10, OUTPUT);  //Sets digital pin 10 as output pin
}

void loop()
{
   if(Serial.available() > 0)      // Send data only when you receive data:
 
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
   //--------------------turn ON 1st LED ----------------------------------
   
      if(data == '1')              // Checks whether value of data is equal to 1
         digitalWrite(13, HIGH);   // If value is 1 then LED turns ON
      else if(data == '5')         // Checks whether value of data is equal to 5
         digitalWrite(13, LOW);    // If value is 5 then LED turns OFF
   

   //--------------------turn ON 2nd LED ----------------------------------

      else if(data == '2')              // Checks whether value of data is equal to 2
         digitalWrite(12, HIGH);   // If value is 2 then LED turns ON
      else if(data == '6')         // Checks whether value of data is equal to 6
         digitalWrite(12, LOW);    // If value is 6 then LED turns OFF
   
    //--------------------turn ON 3rd LED ----------------------------------

       else if(data == '3')        // Checks whether value of data is equal to 3
         digitalWrite(9, HIGH);   // If value is 3 then LED turns ON
      else if(data == '7')         // Checks whether value of data is equal to 7
         digitalWrite(9, LOW);    // If value is 7 then LED turns OFF


   //--------------------turn ON 4th LED ----------------------------------

   
      else if(data == '4')         // Checks whether value of data is equal to 4
         digitalWrite(10, HIGH);   // If value is 4 then LED turns ON
      else if(data == '8')         // Checks whether value of data is equal to 8
         digitalWrite(10, LOW);    // If value is 8 then LED turns OFF
   //--------------------turn OFF ALL the LEDs ----------------------------------
  
    else if (data == '0')          // If value is 0 then All the LEDs turns OFF
    {
      digitalWrite(10, LOW);  
      digitalWrite(9, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    
    else if (data == '9')          // If value is 9 then All the LEDs turns ON
    {
      digitalWrite(10, HIGH);  
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH
      );
    }
    }
}




