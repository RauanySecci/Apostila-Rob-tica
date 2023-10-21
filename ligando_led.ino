int ledPin = 2;
int botao = 3;
int estbotao = 0;
void setup() {
pinMode(ledPin, OUTPUT);
pinMode(botao, INPUT);
}
void loop(){
estbotao = digitalRead(botao);
if (estbotao == HIGH) {
digitalWrite(ledPin, HIGH);
}
else {
digitalWrite(ledPin, LOW);
}
}