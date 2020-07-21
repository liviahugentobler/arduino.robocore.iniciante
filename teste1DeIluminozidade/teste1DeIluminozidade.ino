const int LDR=A0; // pino onde LDR CONECTADO
int leitura=0; // variável para armazenar o valor lido pelo ADC
float tensao=0.0; // variável para armazenar a tensão

void setup()
{
    // Inicia e configura a Serial
    Serial.begin(9600); //96000bps
  
    // configura o pino com LDR como entrada
    pinMode(LDR,INPUT); // pino A0
    }

void loop()
{
  // le o valor de tensão do LDR
  leitura=analogRead(LDR);

  // imprime o valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tubulaçao

  // converte e imprime o valor em tenção elétrica
  tensao=leitura * 5.0/ 1023.0;
  Serial.print("Tensão: ");
  Serial.print(tensao);
  Serial.print("V");

  Serial.println(); // nova linha

  delay(1000);
}
    
