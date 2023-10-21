const int buzzer = 10;
void setup() {
73
pinMode(buzzer,OUTPUT);
}
void loop() {
tone(buzzer,1500); //Ligando o buzzer com uma frequência de 1500 hz.
delay(500);
noTone(buzzer); //Desligando o buzzer.
delay(500);
}