int redPin=3;
int greenPin=5;
int bluePin=6;
void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  colorLED(51,51,255);
  delay(500);
  colorLED(0,0,0);
  delay(500);
  colorLED(102,255,102);
  delay(500);
  colorLED(0,0,0);
  delay(500);
  colorLED(255,51,255);
  delay(500);
  colorLED(0,0,0);
  delay(500);
  // put your main code here, to run repeatedly:

}

void colorLED(int Pin1,int Pin2,int Pin3){
  analogWrite(redPin,Pin1);
  analogWrite(greenPin,Pin2);
  analogWrite(bluePin,Pin3);
}
