// Button

const int ledPin =  10;
const int button = 9;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
