int ldr = A0;

void setup() {
 Serial.begin(9600);

 
}

float valor;
void loop() {

    valor = analogRead(ldr);

    Serial.println("Valor Intensidad: " + String(valor));
}
