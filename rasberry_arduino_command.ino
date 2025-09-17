#include<Servo.h>
  Servo myservo;

void setup(){
  
  myservo.attach(9);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available()>0)
  {
    char command = Serial.read();
    
    if (command == '0')
    {
      myservo.write(0);
      Serial.println(""); 
    } 
    else if (command == '1')
    {
      myservo.write(90);
      Serial.println("");
      
    }
    else if (command == '2')
    {
      myservo.write(180);
      Serial.println("");
    }
    else
    {
      Serial.println("Invaild Command");
    }
  }
  // put your main code here, to run repeatedly:

}
