int led = 13;
void setup() {
//Define a porta do led como saída
pinMode(led, OUTPUT);
}
void loop(){
//Acende o led
digitalWrite(led, HIGH);
60
}
delay(1000);
//Apaga o led
digitalWrite(led, LOW);
delay(1000);
}