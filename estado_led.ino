int sinalparaoled = 8; //Pino do led
int pinosensor = 7; //Ligado ao pino "coletor" do sensor óptico
int leitura;
int estadoled = 0;
void setup() {
pinMode(sinalparaoled, OUTPUT);
pinMode(pinosensor, INPUT);
}
void loop() {
leitura = digitalRead(pinosensor); //Le as informações do pino do sensor
if (leitura != 1) { //Verifica se o objeto foi detectado
while(digitalRead(pinosensor) != 1) {
delay(100);
}
//Inverte o estado do led (ligado / desligado)
estadoled = !estadoled;
digitalWrite(sinalparaoled, estadoled); //Liga ou desliga o led conforme "estadoled"
}
}