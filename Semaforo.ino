//Definindo as portas para cada LED
#define pinLEDVerde 2
#define pinLEDAmarelo 3
#define pinLEDVermelho 4

//Definindo o tempo de espera para cada sinalização
#define tempoEsperaVerde 4500 //Em milisegundos
#define tempoEsperaAmarelo 1500
#define tempoEsperaVermelho 7000

void setup() {

  //Indicando o número das portas digitais
  //E configurando-as como saída (OUTPUT)
  pinMode(pinLEDVerde, OUTPUT);
  pinMode(pinLEDAmarelo, OUTPUT);
  pinMode(pinLEDVermelho, OUTPUT);
}

void loop() {

  //Semáforo - Verde
  digitalWrite(pinLEDVerde, HIGH);
  digitalWrite(pinLEDAmarelo, LOW);
  digitalWrite(pinLEDVermelho, LOW);
  delay(tempoEsperaVerde);
  
  //Semáforo - Amarelo
  digitalWrite(pinLEDVerde, LOW);
  digitalWrite(pinLEDAmarelo, HIGH);
  digitalWrite(pinLEDVermelho, LOW);
  delay(tempoEsperaAmarelo);
  
  //Semáforo - Vermelho
  digitalWrite(pinLEDVerde,LOW);
  digitalWrite(pinLEDAmarelo, LOW);
  digitalWrite(pinLEDVermelho, HIGH);
  delay(tempoEsperaVermelho);
}