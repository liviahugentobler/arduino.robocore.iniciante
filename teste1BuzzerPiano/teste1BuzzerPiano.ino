const int botao1=7;
const int botao2=8;
const int botao3=9;
const int buzzer=10;
const int led1=11;
const int led2=12;
const int led3=13;

// frequencias de cada nota musical
const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si

void setup()
{
  pinMode(botao1,INPUT_PULLUP);
  pinMode(botao2,INPUT_PULLUP);
  pinMode(botao3,INPUT_PULLUP);
  pinMode(buzzer,OUTPUT); // configura o pino buzer como saída
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()
{
   // salva o estado do botão
   bool estado_botao1 =digitalRead(botao1);
   bool estado_botao2 =digitalRead(botao2);
   bool estado_botao3 =digitalRead(botao3);

   if (estado_botao1 == LOW) 
   {
      tone(buzzer, c); // Dó
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
   }
   else if (estado_botao2 == LOW) 
   {
      tone(buzzer, d); // Ré
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
  }
  else if (estado_botao3== LOW)
  {
    tone(buzzer,e); // Mi
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH); 
  }
  else 
  {
    noTone(buzzer); // desliga buzzer
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  
 
}
