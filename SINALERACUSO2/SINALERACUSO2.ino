void setup()
{
  // teste do git
    pinMode(9,OUTPUT); // LED VERDE pedrestes
    pinMode(10,OUTPUT); // LED VERMELHO pedestres
    pinMode(11,OUTPUT); // LED VERDE carros
    pinMode(12,OUTPUT); // LED AMARELO carros
    pinMode(13,OUTPUT); // LED VERMELHO carros
}

void loop()  
{
  // sinal para pedestres fechado: apaga LED VERDE pedestres ACENDE O VERMELHO pedestres
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
  // sinal aberto para carros: apaga LED VERMELHO pedestres, acende LED VERDE dos carros
      //digitalWrite(9,HIGH);
      //digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      delay(3000);
// sinal fechado para carros: apaga LED VERDE, acende LED AMARELO
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      delay(2000);
// sinal aberto para pedestres: apaga LED VERMELHO E ACENDE O VERDE
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
// sinal fechado: apaga LED VERDE para carros, acende LED VERMELHO para carros
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      delay(5000);
}
