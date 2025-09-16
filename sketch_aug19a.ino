int greenLED = 11;
int i = 0;
int blueLED = 7;
int p = 0;
int whiteLED = 2;
int l = 0;


void setup() {
  pinMode(11,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  blinkgreenLED();
  delay(500);
  
  blinkblueLED();
  delay(500);
  
  
  blinkwhiteLED();
  delay(500);
  
}

void blinkgreenLED() {
  for (i=0; i<3; i++){


  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  delay(500);
  
  }
}

void blinkblueLED(){
  for (p=0; p<2; p++){



  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  delay(500);
  }
  
}

void blinkwhiteLED(){
  for (l=0; l<1; l++){


  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
  } 
}
  
