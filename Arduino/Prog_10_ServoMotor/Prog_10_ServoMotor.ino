#include<Servo.h>

Servo serv;

void setup() {

  serv.attach(12);

  Serial.begin(9600);


}

int i;
void loop() {

for(i = 0; i<180; i++){
    serv.write(i);
    delay(20);
  }

delay(100);

for(i = 180; i>0; i--){
    serv.write(i);
    delay(20);
  }
  
delay(500);
  
}


//Ejercio: abrir/activiar los ductos de ventilación (servomotor)
//cuando la temperatura de un cuarto se encuentre por encima
// de la aceptada, entonces, en caso contrario, los ductor serán cerrados
