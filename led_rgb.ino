const int azul = 9;
const int verde = 10;
const int vermelho = 11;
String cor;
void setup() {
Serial.begin(9600);
pinMode(azul, OUTPUT);
pinMode(verde, OUTPUT);
pinMode(vermelho, OUTPUT);
}
//Funções responsáveis por executar o brilho selecionado
void vermelhoFuncao(){
digitalWrite(azul, LOW);
digitalWrite(verde, LOW);
digitalWrite(vermelho, HIGH);
}
void azulFuncao(){
digitalWrite(azul, HIGH);
digitalWrite(verde, LOW);
digitalWrite(vermelho, LOW);
}
void verdeFuncao(){
digitalWrite(azul, LOW);
digitalWrite(verde, HIGH);
digitalWrite(vermelho, LOW);
}
void loop() {
if(Serial.available()){
cor = Serial.readString();
Serial.println(cor);
}
97
if(cor == "Vermelho"){
vermelhoFuncao();
}
if(cor == "Azul"){
azulFuncao();
}
if(cor == "Verde"){
verdeFuncao();
}
}