int d,v,t;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
d=0;
t=0;
v=0;

 Serial.println("ingresa los datos para determinar la velocidad");
}

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0){

  Serial.println("dame la distancia");
  d= Serial.readString().toInt(); //lee el buffer
  Serial.println(d);

  Serial.println("Dame el tiempo");
  t=Serial.readString().toInt();
  Serial.println(t);

  v=d/t;

}
Serial.println(v);
delay(500);
}
