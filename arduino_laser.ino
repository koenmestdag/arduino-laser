/**
 * Laser KY-008 650nm Laser sensor Module 6mm 5V 5mW Red Laser Dot Diode Copper Head for Arduino
 * Bought on https://www.aliexpress.com/item/32738668749.html?spm=a2g0s.9042311.0.0.14574c4dIPVOb4
 * 
 * Attach S to pin LASER_PIN
 * Attach - to GND
 */

const int LASER_PIN = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LASER_PIN, OUTPUT);
  Serial.println("started");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LASER_PIN, HIGH);
  Serial.print("ON");
  delay(500);
  digitalWrite(2, LOW);
  Serial.print(" - OFF");
  delay(100);
}
