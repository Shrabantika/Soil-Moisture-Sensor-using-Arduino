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
## 🛠 Components Used
- Arduino UNO  
- Soil Moisture Sensor V2.0  
- I2C LCD Display (16x2)  
- Active Buzzer  
- Breadboard & Jumper Wires  
- USB Cable for Arduino  

---

## 🔌 Connections (Arduino UNO)

### Soil Moisture Sensor → UNO
- VCC → 5V  
- GND → GND  
- AOUT → A0  

### I2C LCD → UNO
- VCC → 5V  
- GND → GND  
- SDA → A4  
- SCL → A5  

### Buzzer → UNO
- + → D8  
- - → GND  

---

## 📊 Output

LCD displays soil moisture percentage (0–100%).
If moisture < 30%, LCD shows "Soil is Dry!" and buzzer beeps.
If moisture ≥ 30%, LCD shows "Soil OK :)".
