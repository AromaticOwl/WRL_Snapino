// Alternating_Lights

int delay1 = 1000;
int red = 11;
int yellow = 10;
int green = 9;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  delay(delay1);
  
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(delay1 / 2);
  
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(delay1);
  
  digitalWrite(red, LOW);
}
