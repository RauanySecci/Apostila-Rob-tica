int botao = 2;
void setup( ) {
pinMode(botao, INPUT);
Serial.begin(9600);
}
void loop() {
int buttonState = digitalRead(botao);
if (buttonState == 1) {
Serial.println(“ligado”);
64
} else {
Serial.println(“desligado”);
}
}