#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C // See datasheet for 0x3D; usually it's 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Clear the buffer
  display.clearDisplay();

  // Set text color to white
  display.setTextColor(WHITE);

  // Display "Suman Uroan"
  display.setTextSize(2);        // Draw 2X-scale text
  display.setCursor(10, 25);   // Start at (10, 25)
  display.println(F("Suman"));
  
  display.setCursor(10, 45);   // Move down for the last name
  display.println(F("Uroan"));

  display.display(); // Actually show the text on the screen
}

void loop() {
  // Nothing to do in loop
}
