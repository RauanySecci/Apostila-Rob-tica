#include <Thermistor.h>
#include <LiquidCrystal.h>
Thermistor temp(1); // termistor conectado na porta A1 (cria o objeto)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
Serial.begin(9600);
79
lcd.begin(16, 2);
}
void loop() {
float temperature = temp.getTemp(); //calcula a temperatura
//Imprimindo no monitor serial
Serial.print("Temperatura: ");
Serial.print(temperature);
Serial.println("°C");
//imprimindo no LCD
lcd.setCursor(0,0); // Define o cursor na posição de início
lcd.print("Temp. = ");
lcd.print(temperature);
lcd.write(B11011111); // Imprime o símbolo de grau
lcd.print("C");
delay(1000);
}