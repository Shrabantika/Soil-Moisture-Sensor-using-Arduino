#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD setup
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define SOIL_PIN   A0     // Soil sensor analog pin
#define BUZZER_PIN 8      // Buzzer digital pin

int soilValue = 0;
int moisturePercent = 0;

void setup() {
    Serial.begin(9600);

    // LCD initialization
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Soil Monitor");

    // Buzzer setup
    pinMode(BUZZER_PIN, OUTPUT);
    digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
    // Read sensor
    soilValue = analogRead(SOIL_PIN);

    // Convert to percentage
    moisturePercent = map(soilValue, 1023, 300, 0, 100);
    if (moisturePercent < 0) {
        moisturePercent = 0;
    }
    if (moisturePercent > 100) {
        moisturePercent = 100;
    }

    // Show on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture:");
    lcd.print(moisturePercent);
    lcd.print("%");

    // Debugging on Serial
    Serial.print("Soil Value: ");
    Serial.print(soilValue);
    Serial.print("  Moisture: ");
    Serial.print(moisturePercent);
    Serial.println("%");

    // Buzzer + message
    if (moisturePercent < 30) {
        lcd.setCursor(0, 1);
        lcd.print("Soil is Dry!");
        digitalWrite(BUZZER_PIN, HIGH);
        delay(500);
        digitalWrite(BUZZER_PIN, LOW);
        delay(500);
    } else {
        lcd.setCursor(0, 1);
        lcd.print("Soil OK :)   ");
        digitalWrite(BUZZER_PIN, LOW);
        delay(1000);
    }
}
