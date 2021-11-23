int i,determ,j,cant;
int tabla[2][2];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   determ=0;
  cant=0;
  
}

void loop() {
  // put your main code here, to run repeatedly:
  while(cant<4){
    
if(Serial.available()>0){
  for (i=0;i<=1;i++){
    
        for (j=0;j<=1;j++){
           Serial.println("Escribir valor: ");
          
           
            tabla [i][j] = Serial.parseInt();
            Serial.println(tabla[i][j]);
            cant++;
        }
    }
    
}

  }
  
  determ = (tabla[0][0] * tabla[1][1])-(tabla[1][0]*tabla[0][1]);
        Serial.println(determ);
  
delay(2000);
}
