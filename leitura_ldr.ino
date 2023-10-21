int LDR = A0
int ValorLDR; //Vai armazenar a leitura do sensor
int IntensidadeLuz; //Transforma a leitura em uma escala de 0 a 100
void setup() {
Serial.begin(9600);
}
69
void loop() {
ValorLDR = analogRead(LDR); //Faz a leitura do sensor
IntensidadeLuz = map(ValorLDR, 0, 1024, 1, 100); //Converte o valor para uma escala de 0 a 100
Serial.print("Intensidade de Luz = "); //imprime o valor lido na tela
Serial.println(IntensidadeLuz);
delay(300);
}