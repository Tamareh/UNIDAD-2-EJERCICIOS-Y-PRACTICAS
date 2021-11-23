int led = 12;

void setup() {
  pinMode(led, OUTPUT);

  Serial.begin(9600);
  Serial.setTimeout(100);
}

int valor;
void loop() {

  if(Serial.available()>0){
      valor = Serial.readString().toInt();
      digitalWrite(led, valor);
      Serial.println("Accion Aplicada");
    }
    
    delay(250);
       
 
  }


//Tarea. Descargar/Desarrollar una interfaz gráfica de conexión de Python con Arduino
  
