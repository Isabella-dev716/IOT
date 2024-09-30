#Projeto de Tela LCD com sensor de Distãncia

Este projeto foi desenvolvido dentro do Tinkercard, na disciplina de Internet das Coisas 
(IOT), para a criação de um prototipo com arduino que simule uma mensagem de Mantenha
distãncia toda vez que alguém se aproxime a menos de 1 metro de sensor.

## Componentes Usados
- 1 Arduino Uno
- 1 Protoboard (Placa de Ensaio)
- 1 Sensor de Distãncia
- 1 Tela LCD 16x2
- 14 Jumpers Macho-Macho
- 3 Jumpers Macho-Femea
- 1 Resistor de 1 KOhms

 ## Montagem do Circuito
 ![Imagem do Circuito](TelaLCD.png) 

 ## Explicação do Código

 Importando a biblioteca do LCD
 #INCLUDE <LiquidCrystal.h>

 criar variavel do lcd
LiquidCrystal lcd (2,3,4,9,10,11,12);
int ledLCD =13;

metodo para capturar a distãncia
//retorna numero quebrado longo
long distancia(int trigger, int echo){
trigger porta de saida

pinMode(trigger,OUTPUT);
   digitalWrite(trigger,LOW);
  delay(5); espere 5 milisegundos
  digitalWrite(trigger,HIGH);
  
  delay(10); espere 10 milisegundos
   digitalWrite(trigger,LOW); desligar porta
    echo porta de entrada
    
     pinMode(echo,INPUT); definir porta como entrada
     retorna os dados que a porta recebe
  return pulseIn(echo, HIGH);
}

void setup()
{
  
 pinMode(ledLCD,OUTPUT); DEFINIR LEDLCD SAIDA
  digitalWrite(ledLCD, HIGH); ligar os LEDs do LCD
  lcd.begin(16,2); 
  lcd.clear();
  
  
void loop()
{
transformar o valor recebido para cm
  int cm = 0.01723 * distancia(8, 8);
  if(cm<100){ se menor que 1 metro/100cm

  lcd.setCursor(0,0); iniciar a escrita na linha 0 coluna 0
   lcd.print("MANTENHA");
   lcd.setCursor(0,1); iniciar a escrita na linha 0 coluna 0
   lcd.print("DISTANCIA!");
     }else{ senão
      lcd.clear(); apague todas as mensagens do display.
  }
}
   
