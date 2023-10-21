#include <LiquidCrystal.h>
//Define os pinos que serão utilizados para ligação ao display
78
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
//Define o número de colunas e linhas do LCD
lcd.begin(16, 2);
}
void loop() {
lcd.clear(); //Limpa a tela
lcd.setCursor(3, 0); //Posiciona o cursor na coluna 3, linha 0
lcd.print("HELLO"); //Envia o texto entre aspas para o LCD
lcd.setCursor(3, 1);
lcd.print("LCD 16x2");
delay(5000);
}