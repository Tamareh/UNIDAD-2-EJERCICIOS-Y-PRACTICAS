
double p,e,imc;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  p=0;
  e=0;
}

void loop() {
  // put your main code here, to run repeatedly:


 if(Serial.available()>0){
    Serial.println("Indique su peso");
   p= Serial.readString().toInt();
  Serial.println(p);
    Serial.println("Indique su estatura");
    e= Serial.readString().toInt();
    
    

Serial.println(e);
    imc=p/(e*e);

    Serial.println("su IMC es:");
    Serial.println(imc);

  }
 delay(500);  
  

}
