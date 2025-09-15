int greenLED= 11;
int blueLED= 7;

void setup() {
  pinMode(11,OUTPUT);
  pinMode(7,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  blinkLED1();
  delay(1000);
  blinkLED2();
  delay(500);
  blinkLED2();
  delay(1000);
 
  // put your main code here, to run repeatedly:

}

void blinkLED1()
{
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  
}
void blinkLED2()
{
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
}
