#include <Stepper.h>
const int stepsPerRevolution = 500;
//Utilizando as portas digitais 08 a 11 para conexão ao motor
Stepper myStepper(stepsPerRevolution, 8,10,9,11);
void setup() {
// Velocidade inicial do motor (MAX 100)
myStepper.setSpeed(60);
}
void loop() {
for (int i = 0; i<=3; i++) { //Gira o eixo do motor no sentido horário - 90 graus
myStepper.step(-512);
delay(2000);
}
for (int i = 0; i<=2; i++) { //Gira o eixo do motor no sentido anti-horário - 120 graus
myStepper.step(682);
delay(2000);
}
for (int i = 10; i<=60; i=i+10) { //Gira o eixo do motor no sentido horário
myStepper.setSpeed(i);
myStepper.step(40*i);
}
delay(2000);
}