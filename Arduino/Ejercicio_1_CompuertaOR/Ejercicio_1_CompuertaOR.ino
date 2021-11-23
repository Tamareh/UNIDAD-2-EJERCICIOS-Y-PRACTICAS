//configuracion de pines
int sw1 = 14;
int sw2 = 15;
int led = 11;

void setup() {
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);

  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

bool A, B;
void loop() {

  A = !digitalRead(sw1);
  B = !digitalRead(sw2);

  if (A || B) {
    digitalWrite(led, 1);
  }
  else {
    digitalWrite(led, 0);
  }

  delay(250);
}
