#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();// Initilize LCD

  // Print a message on the LCD

  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, World!");
  lcd.setCursor(1,1);
  lcd.print("Mobile Robotics");
  

}

void loop() {
  lcd.setCursor(3,0);
  lcd.print("Happy World");
  lcd.setCursor(1,1);
  lcd.print("Dead Line");// put your main code here, to run repeatedly:
  delay(2000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Digital World!");
  lcd.setCursor(1,1);
  lcd.print("Danger Zone");
  delay(2000);
}
