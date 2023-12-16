#include <Arduino_HTS221.h>

float alphaTemp = 0.3; // Alpha value for temperature
float betaTemp = 0.5;  // Threshold for temperature change
float previousTemp = 0.0;

void setup() {
  Serial.begin(9600);
  
  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity and temperature sensor!");
    while (1);
  }

  previousTemp = HTS.readTemperature();
}

void loop() {
  float currentTemp = HTS.readTemperature();
  float tempEWMA = alphaTemp * currentTemp + (1 - alphaTemp) * previousTemp;
  
  if (abs(tempEWMA - previousTemp) > betaTemp) {
    Serial.print("Temperature: ");
    Serial.println(tempEWMA);
  }
  
  previousTemp = tempEWMA;
  delay(1000); // Delay for a second before next reading
}
