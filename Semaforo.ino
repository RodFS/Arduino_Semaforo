#define pinVerde 2
#define pinAmarelo 3
#define pinVermelho 4

void setup() {
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
}

void loop() {
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinAmarelo, LOW);
  digitalWrite(pinVermelho, LOW);
  delay(1000);
  
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarelo, HIGH);
  digitalWrite(pinVermelho, LOW);
  delay(1000);
  
  digitalWrite(pinVerde,LOW);
  digitalWrite(pinAmarelo, LOW);
  digitalWrite(pinVermelho, HIGH);
  delay(1000);
}