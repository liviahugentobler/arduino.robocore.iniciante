void setup()
{
  pinMode(9,INPUT); //configura o pino como entrada
  pinMode(12,OUTPUT); // configura o pino como saída
}

void loop()
{
  if(digitalRead(9)==HIGH)// se o botão estiver presionado HIGH
  {
     digitalWrite(12,HIGH);// acende o LED
  }
  else
  {
    // se não estiver preicionado LOW
    digitalWrite(12,LOW); //apaga o LED
  }
}
