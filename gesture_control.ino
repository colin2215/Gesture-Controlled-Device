#include <Wire.h>
#include <MPU6050.h>
#include <BluetoothSerial.h>

MPU6050 mpu;
BluetoothSerial SerialBT;

void setup() {
    Serial.begin(115200);
    SerialBT.begin("Gesture_Controller"); // Bluetooth device name
    Wire.begin();
    mpu.initialize();
}

void loop() {
    int16_t ax, ay, az, gx, gy, gz;
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

    // Gesture detection logic
    if (ax > 15000) {
        SerialBT.println("LEFT");
    } else if (ax < -15000) {
        SerialBT.println("RIGHT");
    } else if (ay > 15000) {
        SerialBT.println("UP");
    } else if (ay < -15000) {
        SerialBT.println("DOWN");
    }

    delay(100);
}
