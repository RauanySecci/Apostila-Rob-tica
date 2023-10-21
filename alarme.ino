#include "Ultrasonic.h"
const int echoPin = 6;
const int trigPin = 7;
const int pinoBuzzer = 2;
Ultrasonic ultrasonic(trigPin,echoPin); //INICIALIZANDO OS PINOS
int distancia;
void setup(){
pinMode(echoPin, INPUT); //DEFINE O PINO COMO ENTRADA (RECEBE)
pinMode(trigPin, OUTPUT); //DEFINE O PINO COMO SAÍDA (ENVIA)
pinMode(pinoBuzzer, OUTPUT); //DECLARA O PINO COMO SENDO SAÍDA
}
void loop(){
hcsr04(); //chama a função hcrs04
if(distancia <= 30){
tone(pinoBuzzer,1500);//ACIONA O BUZZER
84
}else{
noTone(pinoBuzzer);//BUZZER PERMANECE DESLIGADO
}
}
void hcsr04(){
digitalWrite(trigPin, LOW); //SETA O PINO 6 COM UM PULSO BAIXO "LOW"
delayMicroseconds(2);
digitalWrite(trigPin, HIGH); //SETA O PINO 6 COM PULSO ALTO "HIGH"
delayMicroseconds(10);
digitalWrite(trigPin, LOW); //SETA O PINO 6 COM PULSO BAIXO "LOW" NOVAMENTE
distancia = (ultrasonic.Ranging(CM));
delay(500);
}