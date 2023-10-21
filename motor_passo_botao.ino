#include "Stepper_28BYJ_48.h" // declaração biblioteca
int switch_1_pin = 8; //pino do primeiro botão
int switch_2_pin = 10; // pino do segundo botão
Stepper_28BYJ_48 stepper(7,6,5,4); // Declaração da instância do motor
void setup() {
pinMode(switch_1_pin,INPUT_PULLUP);
pinMode(switch_2_pin,INPUT_PULLUP);
}
void loop() {
if (digitalRead(switch_1_pin) == LOW ) { // verifica se botão 1 foi pressionado
stepper.step(-1); //gira motor sentido anti horário
delay(10);
}
if ( digitalRead(switch_2_pin) == LOW) { // verifica se botão 1 foi pressionado
stepper.step(1); // gira motor sentido horário
delay(10);
}
}