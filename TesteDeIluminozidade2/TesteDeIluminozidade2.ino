const int LDR=A0; // pino onde LDR CONECTADO
const int LED=7;
int leitura=0; // variável para armazenar o valor lido pelo ADC

void setup()
{
    // configura o pino com LDR e LED
    pinMode(LDR,INPUT); // pino A0
    pinMode(LED,OUTPUT); // pino 7
    }

void loop()
{
  // le o valor de ADC do LDR e LED
  leitura=analogRead(LDR);

   // verifica luminosidade do ambiente
  if(leitura < 40)
    { 
    // se a luminosidade for menor que 40
    digitalWrite(LED,HIGH); // acende o LED
    }
  else 
  {
    // se não
    digitalWrite(LED,LOW); // apaga o LED
  }
  delay(100); // aguarda 100 milissegundos para uma nova leitura

  
}
    
