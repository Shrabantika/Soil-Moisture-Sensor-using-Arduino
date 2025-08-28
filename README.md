# 🌱 Arduino Soil Moisture Monitor with LCD and Buzzer

This project is a **Soil Moisture Monitoring System** built using an **Arduino Uno**, **Soil Moisture Sensor**, **I2C 16x2 LCD**, and a **Buzzer**.  
It measures soil moisture levels and displays the values on the LCD. If the soil is too dry, a buzzer alarm is triggered.

---

## ✨ Features
- Real-time soil moisture measurement
- Displays moisture percentage on a 16x2 I2C LCD
- Buzzer alarm when soil moisture is below a threshold (default: 30%)
- Serial Monitor support for debugging

---

## 🛠️ Components Used
- Arduino Uno
- Soil Moisture Sensor
- 16x2 I2C LCD Display
- Buzzer
- Breadboard & Jumper Wires
- USB Cable

---

## ⚡ Circuit Connections
- **Soil Moisture Sensor** → `A0` (Analog input)  
- **Buzzer** → `D8`  
- **LCD (I2C)** → `SDA → A4`, `SCL → A5`, `VCC → 5V`, `GND → GND`  

---

## 📊 Output

LCD displays soil moisture percentage (0–100%).
If moisture < 30%, LCD shows "Soil is Dry!" and buzzer beeps.
If moisture ≥ 30%, LCD shows "Soil OK :)".
