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

## 🛠 Tools & Components Used
- **Arduino UNO** (Microcontroller) 
- **Soil Moisture Sensor V2.0** (Analog output)  
- **I2C LCD Display (16x2)**  
- **Active Buzzer**  
- **Breadboard & Jumper Wires**  
- **USB Cable for Arduino**  
- **Arduino IDE** (for coding & uploading)  

---

## 🔌 Circuit Connections

### Soil Moisture Sensor → Arduino UNO
- **VCC → 5V**  
- **GND → GND**  
- **AOUT → A0**  

### I2C LCD → Arduino UNO
- **VCC → 5V**  
- **GND → GND**  
- **SDA → A4**  
- **SCL → A5**  

### Buzzer → Arduino UNO
- **+ → D8**  
- **- → GND**  

---

## ⚙️ How It Works
1. The soil moisture sensor detects the water content in the soil.  
2. The Arduino reads the analog values and converts them into a **percentage**.  
3. The LCD displays real-time soil moisture data.  
4. If the soil moisture drops below the threshold (30%), the **buzzer is activated automatically**.  

---

## 📖 Applications
- Smart Irrigation Systems  
- Greenhouse Monitoring  
- Precision Agriculture  
- Home Gardening Automation
