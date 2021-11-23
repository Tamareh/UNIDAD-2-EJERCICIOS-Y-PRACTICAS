int lm35 = A0;

void setup() {
 Serial.begin(9600);

 
}

float valor;
void loop() {

    valor = analogRead(lm35);

    valor = 5.0 * valor / 1023.0;
    valor = valor * 100;

    Serial.println("Temperatura: " + String(valor));
}
