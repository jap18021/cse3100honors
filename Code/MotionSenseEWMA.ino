#include <Arduino_LSM9DS1.h>

float alphaMotion = 0.3; // Alpha value for motion
float betaMotion = 0.5;  // Threshold for motion change
float previousAccel[3] = {0.0, 0.0, 0.0};
float previousGyro[3] = {0.0, 0.0, 0.0};

void setup() {
  Serial.begin(9600);
  
  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }
}

void loop() {
  float acceleration[3], gyro[3];
  if (IMU.accelerationAvailable() && IMU.gyroscopeAvailable()) {
    IMU.readAcceleration(acceleration[0], acceleration[1], acceleration[2]);
    IMU.readGyroscope(gyro[0], gyro[1], gyro[2]);

    for (int i = 0; i < 3; i++) {
      acceleration[i] = alphaMotion * acceleration[i] + (1 - alphaMotion) * previousAccel[i];
      gyro[i] = alphaMotion * gyro[i] + (1 - alphaMotion) * previousGyro[i];

      if (abs(acceleration[i] - previousAccel[i]) > betaMotion || abs(gyro[i] - previousGyro[i]) > betaMotion) {
        Serial.print("Acceleration: ");
        Serial.print(acceleration[0]); Serial.print(", ");
        Serial.print(acceleration[1]); Serial.print(", ");
        Serial.print(acceleration[2]);
        Serial.print(" | Gyroscope: ");
        Serial.print(gyro[0]); Serial.print(", ");
        Serial.print(gyro[1]); Serial.print(", ");
        Serial.println(gyro[2]);
      }

      previousAccel[i] = acceleration[i];
      previousGyro[i] = gyro[i];
    }
  }
  delay(1000); // Delay for a second before next reading
}
