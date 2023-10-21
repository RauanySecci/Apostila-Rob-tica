int sinalparaorele = 4;
void setup(){
//Define o pino como saída
pinMode(sinalparaorele, OUTPUT);
}
void loop(){
digitalWrite(sinalparaorele, HIGH); //Aciona o rele
delay(5000);
digitalWrite(sinalparaorele, LOW); //Desliga o rele
delay(5000);
}