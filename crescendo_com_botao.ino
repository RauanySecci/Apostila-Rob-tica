#define CONTAR 8 // pino onde será conectado a tecla de contagem
#define MODO 9 // pino onde será conectado a tecla de modo
byte tabela_7_seg [16] = {
B01111110, // = Digito 0
B00001100, // = Digito 1
B10110110, // = Digito 2
B10011110, // = Digito 3
B11001100, // = Digito 4
B11011010, // = Digito 5
B11111010, // = Digito 6
B00001110, // = Digito 7
B11111110, // = Digito 8
B11001110, // = Digito 9
B11101110, // = Digito A
B11111000, // = Digito B
B01110010, // = Digito C
B10111100, // = Digito D
B11110010, // = Digito E
B11100010 // = Digito F
};
int contagem = 9, inc_dec =1;
void setup() {
DDRD = B11111110; //Configura os pinos digitais de 1 até 7 como saída digital
pinMode(CONTAR, INPUT);
pinMode(MODO, INPUT);
}
void loop() {
// Lê o botão de Contagem
if (digitalRead(CONTAR)== LOW) {
contagem += inc_dec;
//Reseta a contagem em caso de estouro
if (contagem < 0) {
contagem = 15;
}
if (contagem > 15) {
contagem = 0;
}
//Aguarda a tecla de contagem ser solta

while(digitalRead(CONTAR)== LOW) {
}
}
// Lê o botão que seleciona MODO
if(digitalRead(MODO)== LOW) {
//Inverte o modo de operação do contador
inc_dec = inc_dec * (-1);
//Aguarda a tecla de MODO ser solta
while(digitalRead(MODO)== LOW){
}
}
PORTD = tabela_7_seg[contagem]; //Busca o valor da contagem na matriz
delay(50);
}