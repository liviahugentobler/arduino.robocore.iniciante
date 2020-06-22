int vermelho=2;
int amarelo=5;
int verde=6;
int tempoAceso=5000;
int tempoApagado=100;
void setup()
{
  pinMode(vermelho,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(verde,OUTPUT);
}

void loop()
{
  digitalWrite(vermelho,HIGH);
  delay(tempoAceso);
  digitalWrite(vermelho,LOW);
  delay(tempoApagado);
  
  digitalWrite(amarelo,HIGH);
  delay(tempoAceso);
  digitalWrite(amarelo,LOW);
  delay(tempoApagado);
  
  digitalWrite(verde, HIGH);
  delay(tempoAceso);
  digitalWrite(verde,LOW);
  delay(tempoApagado); 
}
