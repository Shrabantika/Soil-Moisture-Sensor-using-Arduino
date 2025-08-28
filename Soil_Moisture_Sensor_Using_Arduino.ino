#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD I2C address 0x27 (sometimes 0x3F)

const int soilPin = A0;      // Soil sensor analog output connected to A0
const int buzzerPin = 8;     // Buzzer connected to digital pin 8

int soilValue = 0;

void setup() {
  Serial.begin(9600);

  // LCD setup
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Soil Monitor");

  // Buzzer setup
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Read soil sensor
  soilValue = analogRead(soilPin);

  // Convert raw value to percentage (0 = dry, 100 = wet)
  int moisturePercent = map(soilValue, 1023, 300, 0, 100); 
  moisturePercent = constrain(moisturePercent, 0, 100);

  // Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Moisture:");
  lcd.print(moisturePercent);
  lcd.print("%");

  // Print on Serial Monitor (for debugging)
  Serial.print("Soil Value: ");
  Serial.print(soilValue);
  Serial.print("  Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  // Buzzer alert if dry
  if (moisturePercent < 30) {
    lcd.setCursor(0, 1);
    lcd.print("Soil is Dry!");
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Soil OK :)   ");
    digitalWrite(buzzerPin, LOW);
    delay(1000);
  }
}