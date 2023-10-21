#include Servo.h;
Servo meuservo;
int angulo = 0;
int potencio = A0;
void setup() {
meuservo.attach(9);
}
void loop() {
angulo = analogRead(potencio); // Faz a leitura do valor do potenciômetro
angulo = map(angulo, 0, 1023, 0, 179); // Associa o valor do potenciômetro ao valor do ângulo
meuservo.write(angulo); // Comando para posicionar o servo no ângulo especificado
delay(5);
}