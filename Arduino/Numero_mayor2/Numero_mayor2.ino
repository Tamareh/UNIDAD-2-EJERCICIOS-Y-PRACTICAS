int Nnum, num, mayor;
int i;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

mayor=0;
Nnum=10;
i=0;
num=0;
}

void loop() {
  while(i<Nnum){
  if(Serial.available()>0){
    Serial.println("ingresa el numero");
    num = Serial.readString().toInt();

    Serial.println(num);
    if (num > mayor){
      
      mayor=num;
     
    }
     i++;
  }
  }
  Serial.print("el numero mayor es:" );
  Serial.print(+mayor);
    delay(500);
  }
  
