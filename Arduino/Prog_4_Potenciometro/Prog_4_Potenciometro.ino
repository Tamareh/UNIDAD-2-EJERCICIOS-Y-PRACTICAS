int pot = A0;

void setup() {
  //como se trabajará con un pin analogico, no es necesario establacer el modo de trabajo del pin

  Serial.begin(9600);
}

int i;
void loop() {

 i = analogRead(pot);  // [0 - 1023]  //1024 valores posibles

  //PWM [ 0 - 255 ]  <- analogWrite
  // Digital [ 0 - 1 ]  <- digital read o write

 Serial.println(i);

}
