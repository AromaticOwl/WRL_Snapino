// Alternating_Lights

int delay1 = 250;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  delay(delay1);
  digitalWrite(9, LOW);
  delay(delay1);
  digitalWrite(10, HIGH);
  delay(delay1);
  digitalWrite(10, LOW);
  delay(delay1);
}
