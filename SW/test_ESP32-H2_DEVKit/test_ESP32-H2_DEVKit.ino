// LaskaKit ESP32-H2 DEVKit

#include <SensirionI2CSht4x.h>

#define PIN_ON 12

SensirionI2CSht4x sht4x;

void setup() {
  Serial.begin(115200);
  pinMode(PIN_ON, OUTPUT);
  digitalWrite(PIN_ON, HIGH);
  Wire.begin(11, 10);

  uint16_t error;
  char errorMessage[256];

  sht4x.begin(Wire);

  uint32_t serialNumber;
  error = sht4x.serialNumber(serialNumber);
  if (error) {
      Serial.print("Error trying to execute serialNumber(): ");
      errorToString(error, errorMessage, 256);
      Serial.println(errorMessage);
  } else {
      Serial.print("Serial Number: ");
      Serial.println(serialNumber);
  }

}

void loop() {
  
  uint16_t error;
  char errorMessage[256];
  float temperature;
  float humidity;
  
  error = sht4x.measureHighPrecision(temperature, humidity);
  if (error) {
      Serial.print("Error trying to execute measureHighPrecision(): ");
      errorToString(error, errorMessage, 256);
      Serial.println(errorMessage);
  } else {
      Serial.print("Temperature:");
      Serial.print(temperature);
      Serial.print("\t");
      Serial.print("Humidity:");
      Serial.println(humidity);
  }
  
  delay(1000);

}
