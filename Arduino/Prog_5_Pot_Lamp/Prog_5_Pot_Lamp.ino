//configuracion de pines
int pot = A0;
int lamp = 10;

void setup() {
  //como se trabajará con un pin analogico, no es necesario establacer el modo de trabajo del pin

  //pwm, no requiere establecer el modo de trabajo del pin

  Serial.begin(9600);
}

int i;
void loop() {

  i = analogRead(pot);  // [0 - 1023]  //1024 valores posibles

  //PWM [ 0 - 255 ]  <- analogWrite
  // Digital [ 0 - 1 ]  <- digital read o write

//Parametros: 
//valor a convertir,
//val. Men. Intervalo org., 
//val. May. Intervalo org., 
//val. Men. Intervalo dest., 
//val. May. Intervalo dest.
  i = map(i, 0, 1023, 0, 255); //Convierte un numero de un intervalo origen a su equivalente en un intervalo destino 

  analogWrite(lamp, i);

  Serial.println(i);

}
