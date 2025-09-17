void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available()>0)
  {
    char command = Serial.read();
    
    if (command == '1')
    {
      digitalWrite(LED_BUILTIN,HIGH);
      Serial.println("LED ON"); 
    } 
    else if (command == '0')
    {
      digitalWrite(LED_BUILTIN,LOW);
      Serial.print("LED OFF");
      
    }
    else
    {
      Serial.print("Invaild Command");
    }
  }
  
  // put your main code here, to run repeatedly:

}
