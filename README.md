# Gesture-Controlled-Device
A gesture-controlled system that allows users to interact with robots, computers, or smart appliances using hand gestures. The system processes real-time sensor data and translates it into actions via Bluetooth/WiFi.

---

## Features
- **Gesture Recognition**: Detects and interprets hand movements.
- **Wireless Communication**: Uses Bluetooth/WiFi for remote control. 
- **Real-Time Interaction** : Immediate response to gestures.
- **Multi-Platform Support** : Works with robots, PCs, and home automation.

---

## Hardware Requirements 
- **IMU Sensor** (MPU6050, MPU9250) or Leap Motion Controller
- **Microcontroller** (ESP32, Arduino, Raspberry Pi)
- **Wireless Module** (HC-05 Bluetooth or ESP WiFi)
- **Power Supply** (Battery pack for portable use)

---

## Software Requirements
- Arduino IDE or VSCode
- **Programming Languages**: Pyhton, C++
- **Libraries**
  - `numpy` (for signal processing)
  - `pyserial` (for serial communication)
  - `opencv-python` (for gesture tracking if using a camera)
  - `scipy` (for filtering sensor noise)

---

## Project Workflow
1. **Sensor Input**
   Read real-time motion data from the IMU (accelerometer + gyroscope).

2. **Signal Processing**
   Use Kalman filters / complementary filters to remove noise.
  
3. **Gesture Classification**
   Define specific hand motions (e.g., left-right swipe, up-down movement).

4. **Wireless Transmission**
   Send recognized commands via Bluetooth or WiFi.

5. **Action Execution**
   Robot moves, computer action triggers, or appliance toggles ON/OFF.
  
---

## How To Run
1. **Upload Microcontroller Code**
   Open Arduino IDE, `upload gesture_control.ino` to ESP32 or Arduino.

2. **Install Dependencies on PC**
   ```bash
   pip install pyserial numpy opencv-python scipy
   ```

3. **Run the Python Receiver**
   ```bash
   python gesture_receiver.py
   ```

4. **Test Gestures**
   Move hand left, right, up, or down → Observe actions on the PC.
  
---

## Outputs
- **Terminal Output**
  ```sql
  Received Gesture: LEFT
  Executing LEFT action...
  ```
- **Device Action**: Robot moves, a computer action executes, or a smart appliance turns ON/OFF.

---

## Future Enhancements 
 - **Machine Learning Integration**: for advanced gesture recognition.
 - **Mobile App**: to control devices using gestures remotely.
 - **Customizable Gestures**: for different applications.

---

## Acknowledgments 
 - **MPU6050 Library**: Used for IMU motion detection.
 - **Python Serial Communication**: For interfacing with microcontroller.
 - **Bluetooth Integration**: Enabling wireless control.
   
