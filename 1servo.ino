

#include <Servo.h>

Servo myServo;  // Create a servo object to control the motor

void setup() {
  myServo.attach(9);  // Attach the servo signal wire to digital pin 9
}

void loop() {
  // Move to 80 degrees
  myServo.write(80);
  delay(1000);  // Wait 1 second for the servo to reach the position

  // Move to 90 degrees
  myServo.write(90);
  delay(1000);  // Wait 1 second

  // Move to 180 degrees
  myServo.write(180);
  delay(1000);  // Wait 1 second
}
