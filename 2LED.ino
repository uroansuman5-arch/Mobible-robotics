// Define the LED pin numbers
const int ledPin1 = 12; // Connect the first LED to Digital Pin 12
const int ledPin2 = 13; // Connect the second LED to Digital Pin 13

void setup() {
  // Initialize the LED pins as outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Turn LED 1 ON and LED 2 OFF
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(2000); // Wait for 1 second (1000 milliseconds)

  // Turn LED 1 OFF and LED 2 ON
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(2000); // Wait for 1 second
}
