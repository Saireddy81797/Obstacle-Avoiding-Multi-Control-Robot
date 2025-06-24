# 🤖 Obstacle-Avoiding Multi-Control Robot

This project showcases an intelligent robot car capable of **autonomously detecting and avoiding obstacles**, and also controlled using **Bluetooth** (via Android app), **IR remote**, and **voice commands**.

---

## 🚀 Features

- 🔍 **Obstacle Avoidance** using ultrasonic sensors for real-time distance measurement
- 📲 **Bluetooth Control** using mobile app (F/B/L/R/S commands)
- 🎤 **Voice Command Control** with special characters for directions
- 🕹️ Multi-mode interaction for flexibility and usability

---

## 🛠️ Technologies Used

- **Arduino UNO**
- **C++ / Arduino Language**
- **Ultrasonic Sensor**
- **Servo Motor (for sensor scanning)**
- **IR Sensor**
- **Bluetooth Module (HC-05/HC-06)**
- **Voice Command Module**
- **AFMotor Library for Motor Shield**

---

## 🧠 How It Works

### Obstacle Avoidance
- Uses ultrasonic sensor to measure distance
- Stops and scans both left & right using servo
- Turns toward the side with more free space

### Bluetooth Control
- Receives character input from mobile
- 'F' = Forward, 'B' = Backward, 'L' = Left, 'R' = Right, 'S' = Stop

### Voice Control
- Interprets voice commands as:
  - `^` = Forward
  - `-` = Backward
  - `<` = Left
  - `>` = Right
  - `*` = Stop

---


## 🔧 Arduino Code Files

-  [FullRobotControl.ino](Code/FullRobotControl.ino) — Obstacle Avoidance code
-  [BluetoothControlOnly.ino](Code/BluetoothControlOnly.ino) — Bluetooth- code 
-  [ObstacleAvoidanceOnly.ino](Code/ObstacleAvoidanceOnly.ino) — Voice Control Code


## 📸 Project Images

### 🤖 Robot Car
![Robot Car](Images/robot_photo.jpg)

### 🧩 Circuit Diagram
![Circuit](Images/circuit_diagram.png)

### 🎙️ Voice Module
![Voice Module](Images/voice_module.png)

