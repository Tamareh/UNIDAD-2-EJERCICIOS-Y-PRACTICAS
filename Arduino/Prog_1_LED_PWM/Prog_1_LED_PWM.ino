int led = 10;

void setup() {
  //Como se utilizará un pin digital como PWM, entonces no es necesario establecer el modo de trabajo del pin.

}

int i;
void loop() {
  //PWM  puede realizar una escritura de 0 al 255 - > analogWrite
  for (i = 0; i <= 255; i++) {
    analogWrite(led, i);
    delay(10); //ms
    //delayMicroseconds()
  }

  for (i = 254; i > 0; i--) {
    analogWrite(led, i);
    delay(10); //ms
    //delayMicroseconds()
  }



}
