#include <Arduino_HTS221.h>

float wmatemp, wmahumidity;
float deltatemp = 0, deltahumidity = 0;
float readtemp, readhumidity;
float alpha = 0.5, beta = 0.8;
float epsilontemp = 1, epsilonhumidity = 1;
float expectedtemp, expectedhumidity;

float svalue(float prev, float next, float alpha) {
  return (1 - alpha) * prev + alpha * next;
}
float sdelta(float prev, float next, float beta) {
  return (1 - beta) * prev + beta * next;
}

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity temperature sensor!");
    while (1);
  }
  Serial.println("Initializing model...");
  // At the start, assume the average to be the first read and delta to be 0
  wmatemp = HTS.readTemperature();
  wmahumidity = HTS.readHumidity();
  delay(2000);
}

void loop() {
  // calculate expected values
  expectedtemp = wmatemp + deltatemp;
  expectedhumidity = wmahumidity + deltahumidity;
  readtemp = HTS.readTemperature();
  readhumidity = HTS.readHumidity();
  // if the model did not predict temperature/humidity print the new data
  // update delta and wma
  if (abs(readtemp - expectedtemp) > epsilontemp) {
    deltatemp = sdelta(deltatemp, readtemp - wmatemp, beta);
    wmatemp = svalue(wmatemp, readtemp, alpha);
    Serial.print("New temperature WMA: ");
    Serial.println(wmatemp);
    Serial.print("New temperature delta: ");
    Serial.println(deltatemp);
  }
  else {
    deltatemp = sdelta(deltatemp, readtemp - wmatemp, beta);
    wmatemp = svalue(wmatemp, readtemp, alpha);
  }
  if (abs(readhumidity - expectedhumidity) > epsilonhumidity) {
    deltahumidity = sdelta(deltahumidity, readhumidity - wmahumidity, beta);
    wmahumidity = svalue(wmahumidity, readhumidity, alpha);
    Serial.print("New humidity WMA: ");
    Serial.println(wmahumidity);
    Serial.print("New humidity delta: ");
    Serial.println(deltahumidity);
  }
  else {
    deltahumidity = sdelta(deltahumidity, readhumidity - wmahumidity, beta);
    wmahumidity = svalue(wmahumidity, readhumidity, alpha);
  }
  delay(2000);
}

