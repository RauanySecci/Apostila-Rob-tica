const int potenciometro = A0; // pino de entrada do potenciômetro
int valor = 0;
void setup() {
pinMode(potenciometro, INPUT);
Serial.begin(9600);
}
void loop() {
valor = analogRead(potenciometro);
Serial.println(valor);
delay(100);
}