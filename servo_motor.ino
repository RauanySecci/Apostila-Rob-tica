#include "Servo.h"
Servo meuservo;
int angulo = 0; // Ajusta o ângulo inicial do Servo
void setup() {
meuservo.attach(9);
}
void loop() {
for (angulo = 0; angulo < 180; angulo += 1) {
meuservo.write(angulo); // Comando para ângulo específico
delay(15);
}
delay(2000);
for (angulo = 180; angulo >= 1; angulo -= 5) {
meuservo.write(angulo);
delay(5);
}
delay(2000);
}