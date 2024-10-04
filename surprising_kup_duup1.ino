// BIBLIOTECA PARA CONEXÃO SERIAL DO SENSOR
#include <SoftwareSerial.h>
// VARIAVEL DO SENSOR
int sensor=A0;


void setup()
{
  // DEFINIR O SENSOR COMO ENTRADA
  pinMode (sensor,INPUT);
  // INICIALIZANDO O MONITOR SERIAL
  Serial.begin(9600);
 
}

void loop()
{
  // GUARDAR O VALOR LIDO PELO SENSOR
  int umidade = analogRead(sensor);
  // IMPRIMINDO O VALOR LIDO
  Serial.print("Umidade do solo: " );
  Serial.println(umidade);
  delay(1000); //espere 10 segundos
  
}if(umidade<=300){
  Serial.println(Solo seco!);
    
  }if (umidade<=500){
      
   Serial.printl(Solo ideal);
    
  }if (umidade >500){
    Serial.printl(Solo umido);
  
  }
  
  
  
  
}
