// variaveis dos led
int ledVermelho = 1;
int ledAmarelo = 2;
int ledVerde = 3;
void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode (ledAmarelo, OUTPUT);
  pinMode (ledVerde, OUTPUT);
}

void loop()
{
  
   digitalWrite(ledVermelho,HIGH);//ligar vermelho
   digitalWrite(ledAmarelo, LOW);//desligar amarelo
   digitalWrite(ledVerde, LOW);//desligar verde
  delay(5000);//espere 5 segundos
  //ligar o led vermelho
  digitalWrite(ledVermelho, LOW);//desligar vermelho
  digitalWrite(ledAmarelo, HIGH);//ligar amarelo
  digitalWrite(ledVerde, LOW);//desligar verde
  delay(5000); //espere 5 segundos
  //ligar o led amarelo
  digitalWrite(ledVermelho, LOW);//desligar led vermelho
  digitalWrite(ledVerde, HIGH);//ligar led verde
  delay(5000); //espere 5 segundos
 
}