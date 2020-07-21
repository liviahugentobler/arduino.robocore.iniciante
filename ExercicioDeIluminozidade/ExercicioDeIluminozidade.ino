const int pinoLDR = A0; // pino onde o LRD está conectado
const int pinoLED_VD = 7; // pino onde o LED está conectado
const int pinoLED_AM = 6; // pino onde o LED está conectado
const int pinoLED_VM = 5; // pino onde o LED está conectado
int leitura = 0; // variável para armazenar o valor lido pelo ADC

void setup() {
  // configura os pinos do LDR e LED
  pinMode(pinoLDR, INPUT); 
  pinMode(pinoLED_VD, OUTPUT);
  pinMode(pinoLED_AM, OUTPUT);
  pinMode(pinoLED_VM, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // le o valor de ADC no pino do LDR
  leitura = analogRead(pinoLDR);
  Serial.println(leitura);

  // verifica luminosidade do ambiente
  if(leitura < 100)
  { 
    // se a luminosidade for menor que 100
    digitalWrite(pinoLED_VD,HIGH); // acende o LED verde
    digitalWrite(pinoLED_AM,LOW);
    digitalWrite(pinoLED_VM,LOW);
  }
  else if(leitura < 500 && leitura >= 100) 
  { 
    // se estiver entre 100 e 500
    digitalWrite(pinoLED_VD,LOW); 
    digitalWrite(pinoLED_AM,HIGH); // acende o LED amarelo
    digitalWrite(pinoLED_VM,LOW);
  }
  else if(leitura >= 500) { // se for superior a 500
    digitalWrite(pinoLED_VD,LOW);
    digitalWrite(pinoLED_AM,LOW);
    digitalWrite(pinoLED_VM,HIGH); // acende o LED vermelho
  }
  delay(10); // aguarda 100 milissegundos para uma nova leitura
}
