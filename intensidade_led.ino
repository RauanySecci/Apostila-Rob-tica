#define potPin 0
#define ledPin 10
int valPot = 0;
void setup() {
pinMode(ledPin,OUTPUT);
pinMode(potPin,INPUT);
}
void loop() {
valPot = analogRead(potPin); //Leitura do potenciômetro
valPot = map(valPot,0,1023,0,255); //Transforma a escala
analogWrite(ledPin,valPot ); // Aciona o LED proporcionalmente
}