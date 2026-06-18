#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.init();                      
  
  // Turn on the blacklight (optional)
  lcd.backlight();
  
  // Clear the display to ensure it is blank
  lcd.clear();
  
  // Set the cursor to column 4, line 0 (to center the 7-character string)
  lcd.setCursor(4, 0);
  
  // Print the desired string on the screen
  lcd.print("24P0108");
}

void loop() {
  // Nothing to do in the loop
}
