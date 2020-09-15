const int pinoPotenciometro = A0; // pino onde o pontenciômetro está conectado
const int pinoLED = 12; // pino onde o LED está conectado
const int periodo = 1023;
int tempo_ligado, tempo_desligado ; // variável para armazenar o valor lido pelo ADC

void setup() 
{
  pinMode(pinoPotenciometro, INPUT); // configura o pino com potenciômetro como entrada
  pinMode(pinoLED, OUTPUT); // configura o pino com o LED como saída
  Serial.begin(9600);
}

void loop() 
{
  tempo_ligado = analogRead(pinoPotenciometro);// le o valor de tensão no pino do potenciômetro
  tempo_desligado = periodo - tempo_ligado; // atribui a variável tempo_desligado, quanto tempo o LED deverá permanecer desligado. 
  digitalWrite(pinoLED, HIGH); // aciona o LED
  delayMicroseconds(tempo_ligado); // aguarda o valor lido no pino do potenciômetro em milissegundos
  digitalWrite(pinoLED, LOW); // apaga o LED
  delayMicroseconds(tempo_desligado); // aguarda o valor lido no pino do potenciômetro em milissegundos
  Serial.print(tempo_ligado);
  Serial.print("\t");
  Serial.println(tempo_desligado);
    
}
