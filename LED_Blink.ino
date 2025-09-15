int greenLED = 11;
int redLED = 4;
int blueLED = 2;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  Serial.begin(9600);
  
  // put your main code here, to run repeatedly:

}

void loop(){
  digitalWrite(greenLED,HIGH);
  Serial.println("greenLED is ON");
  Serial.println("redLED is OFF");
  Serial.println("blueLED is OFF");
  Serial.println(" ");
  delay(1000);
  digitalWrite(greenLED,LOW);
  
  digitalWrite(redLED,HIGH);
  Serial.println("redLED is ON");
  Serial.println("greenLED is OFF");
  Serial.println("blueLED is OFF");
  Serial.println(" ");
  delay (1000);
  digitalWrite(redLED,LOW);
  
  digitalWrite(blueLED,HIGH);
  Serial.println("blueLED is ON");
  Serial.println("redLED is OFF");
  Serial.println("greenLED is OFF");
  Serial.println(" ");
  delay(1000);
  digitalWrite(blueLED,LOW);
}
