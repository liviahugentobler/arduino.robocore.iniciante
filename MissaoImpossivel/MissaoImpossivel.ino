// Declaração dos pinos dos componentes
const int pinoLDR = A0;
const int pinoBuzzer = 9;
const int pinoBotao = 8;

// Variáveis gerais
int leituraLDR = 0;
int contador = 0;
int leituraBotao;
int flag = 0;

void setup() {
  // Configura os pinos
  pinMode(pinoLDR, INPUT);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoBotao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // le o valor de tensão no pino do LDR
  leituraLDR = analogRead(pinoLDR);
  // le o estado do botao
  leituraBotao = digitalRead(pinoBotao);
  if (leituraBotao == LOW) {
    contador = 0;
    Serial.println(contador);
    delay(100);
  }

  if (leituraLDR <= 512 && flag == 0) {
    contador++;
    flag = 1;
    Serial.println(contador);
    tone(pinoBuzzer, 1000);
    delay(10);
    noTone(pinoBuzzer);
  }
  else if (leituraLDR > 512 && flag == 1) {
    flag = 0;
  }
  delay(10); // aguarda 100 milissegundos para uma nova leitura
}
