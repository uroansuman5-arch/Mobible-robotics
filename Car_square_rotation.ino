// Left motors
int ENA = 5;   // PWM
int IN1 = 6;
int IN2 = 7;

// Right motors
int ENB = 9;   // PWM
int IN3 = 8;
int IN4 = 11;


void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
// put your setup code here, to run once:

  forward(200);
  delay(2000);
  rightTurn(140);
  delay(900);
  forward(200);
  delay(2000);
  rightTurn(140);
  delay(900);
  forward(200);
  delay(2000);
  rightTurn(140);
  delay(900);
  forward(200);
  delay(2000);
  stopAll();
  delay(1000);
}
void loop() {
// put your main code here, to run repeatedly
}

void forward(int speed) {
  // Left motors
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, speed);

  // Right motors
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, speed);

}

void rightTurn(int speed) {
  // Left motors backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, speed);

  // Right motors forward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, speed);
}

void stopAll(){

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
