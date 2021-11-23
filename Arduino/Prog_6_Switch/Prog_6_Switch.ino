int sw = 14;

void setup() {
  pinMode(sw, INPUT_PULLUP);
  
  Serial.begin(9600);
}

int i;
void loop() {

  i = digitalRead(sw)*-1;  // [0 - 1] 

  Serial.println(i);

}

//Tarea (Programa).- Simulación de la Compuerta XOR con entrada de datos por "switch" y representación 
//del resultado en un LED
