const int buttonPin = 2;   
const int led1Pin = 9;     
const int led2Pin = 10;    

int buttonState = 0;         
int lastButtonState = 0;     
int pressCount = 0;          

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Button connected between Pin 2 and GND
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // Check for a state change (button pressed)
  if (buttonState == LOW && lastButtonState == HIGH) {
    pressCount++; // Increment the press count
    delay(50);    // Simple debounce delay
  }
  lastButtonState = buttonState;

  // Control LEDs based on the number of button presses
  if (pressCount == 1) {
    digitalWrite(led1Pin, HIGH); 
    digitalWrite(led2Pin, LOW);  
  } 
  else if (pressCount == 2) {
    digitalWrite(led1Pin, LOW);  
    digitalWrite(led2Pin, HIGH); 
  }
  else if (pressCount > 2) {
    pressCount = 0; // Reset after the second press
  }
}
