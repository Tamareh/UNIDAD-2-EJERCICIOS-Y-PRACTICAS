int led = 12;

void setup() {
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {

    digitalWrite(led, 1);
    Serial.println("Led Prendido");
    delay(500);
    
    digitalWrite(led, 0);
    Serial.println("Led Apagado");
    delay(500);
 
  }

  
