//Author-  ARSH ANWAR  
//GitHub- arshanwar
//Project Infinity
//TX of Arduino goes to RX of HC-05
//RX of Arduino Goes to TX of HC-05
//VCC of HC-05 Goes to +5v from Arduino
//GND of HC-05 Goes to GND from Arduino


char j;
String iS="";
#include<AFMotor.h>     //Motorshield library must be include manually
AF_DCMotor motor1(1);   //L293d Motorshield port M1
AF_DCMotor motor2(3);    //L293d Motorshield port M3
int piezo=8;             //Piezo Buzzer pinmode
void setup()    
{
 motor1.setSpeed(255);      //Can be set from 0-255
 motor2.setSpeed(255);      //Can be set from 0-255
 pinMode(8, OUTPUT);        //pinmode for Buzzer set as output
 Serial.begin(9600);         //Default Baud rate          
}
void loop()
{
  if(Serial.available())
  {
  while(Serial.available())
    {
      char iC = (char)Serial.read(); //Reading data from HC-05
      iS += iC;       
    }
    Serial.println(i);
    while (Serial.available() > 0)  
    { 
      j = Serial.read() ; 
    }      
    
    if(iS == '4')   //To move forward      
    { 
      motor1.run(FORWARD);
      motor2.run(FORWARD);
      delay(3000)
    }
    else if(iS == '5')   //To move backward 
    { 
      motor1.run(BACKWARD);
      motor2.run(BACKWARD);
        digitalWrite(piezo,LOW);
        delay(3000)
    }
    else if(iS == '6')   //To move left
    {  
      motor1.run(FORWARD);
      motor2.run(BACKWARD);
      delay(3000)
    }
    else if(iS == '7')    //To move right 
    {                           
      motor1.run(BACKWARD);
      motor2.run(FORWARD);
      delay(3000)
    }
   
    iS = "";
  }
}
