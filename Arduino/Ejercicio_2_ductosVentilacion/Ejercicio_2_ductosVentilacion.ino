//Ejercio: abrir/activiar los ductos de ventilación (servomotor)
//cuando la temperatura de un cuarto se encuentre por encima
// de la aceptada, entonces, en caso contrario, los ductor serán cerrados

#include<Servo.h>

Servo V1;
Servo V2;
Servo V3;
Servo V4;

int S1 = A0;
int S2 = A1;
int S3 = A2;
int S4 = A3;

void setup() {
  V1.attach(13);
  V2.attach(11);
  //
  //

  Serial.begin(9600);
}

float tempS1, tempS2, tempS3, tempS4;

float tempDeseadaC1 = 24,
      tempDeseadaC2 = 16,
      tempDeseadaC3 = 30,
      tempDeseadaC4 = 27;

void loop() {
  tempS1 = 5.0 * analogRead(S1) * 100.0 / 1023.0; // 0 - 1023
  tempS2 = 5.0 * analogRead(S2) * 100.0 / 1023.0; // 0 - 1023

  Serial.println("Temp C1: " + String(tempS1) +
                 "\n Temp C2: " + String(tempS2)
                );

  if(tempS1 > tempDeseadaC1){
      V1.write(180); //"abrir"
    }
    else {
      V1.write(0); //"cerrar"
      }


  delay(500);
}
