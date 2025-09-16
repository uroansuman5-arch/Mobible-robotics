#include<Servo.h>

Servo myservo;
int buttonPin=9;
int buttonState=0;


void setup() {
  pinMode(buttonPin,OUTPUT);
  myservo.attach(9);
  Serial.begin(9600);
  Serial.println("type 1 to DOOR OPEN, type 2 to DOOR CLOSE");
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0)
  {
    char input_command=Serial.read();

    if(input_command=='1')
  {
  digitalWrite(ledPin,HIGH);
  Serial.println("LED ON");
  // put your main code here, to run repeatedly:

}

else if(input_command== '2')
{
  digitalWrite(ledPin,LOW);
  Serial.println("LED OFF");
}
else

{
Serial.println("Invalid Command");
}
}
}
