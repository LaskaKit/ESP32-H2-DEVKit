/* Board test for LaskaKit ESP32-H2-DEVkit
 * ESP32-H2-DEVKit just changing LED color
 * 
 * Board:   LaskaKit ESP32-H2-DEVkit
 * 
 * Email:podpora@laskakit.cz
 * Web:laskakit.cz
 */

// Requires Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#define PIN_ON 12
#define PIN_LED 9

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pinMode(PIN_ON, OUTPUT);      // Set EN pin for second stabilisator as output
  digitalWrite(PIN_ON, HIGH);   // Turn on the second stabilisator

  pixels.begin();
  pixels.setBrightness(10);
}

void loop() {
     
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // R, G, B
  pixels.show();

  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 255, 0)); // R, G, B
  pixels.show();

  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 0, 255)); // R, G, B
  pixels.show();

  delay(1000);

  pixels.setPixelColor(0, pixels.Color(255, 255, 255)); // R, G, B
  pixels.show();

  delay(1000);

}
