#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "Adafruit_TCS34725.h"
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);
#define BACKLIGHT_PIN 13
// instância do sensor RGB
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_700MS,
TCS34725_GAIN_1X);
void setup() {
pinMode ( BACKLIGHT_PIN, OUTPUT );
digitalWrite ( BACKLIGHT_PIN, HIGH );
lcd.begin(16,2);
lcd.home ();
lcd.print("Identificação de cores");
lcd.setCursor ( 0, 1 );
lcd.print ("Testando display");
delay ( 1000 );
lcd.clear();
if (tcs.begin()) { // se o sensor foi detectado
lcd.setCursor ( 0, 0 );
lcd.println("Sensor ok ");
} else { // se sensor não encontrado
lcd.setCursor ( 0, 0 );
lcd.println("Nao ha sensor");
lcd.setCursor ( 0, 1 );
lcd.print("Verifique!");
while (1);
}
}
void loop(){
// instância para variáveis do sensor
uint16_t r, g, b, c, colorTemp, lux;
// leitura de dados de tons de cores e luminosidade
tcs.getRawData(&r, &g, &b, &c);
// cálculo dos níveis de cores
colorTemp = tcs.calculateColorTemperature(r, g, b);
// cálculo de nível de luminosidade
lux = tcs.calculateLux(r, g, b);
if(c < 5000){ // se claridade for menor que 5000
if (r>b && r>g){ // tom vermelho maiores que azul e verde
lcd.setCursor(0,1);
lcd.print("Vermelho ");
delay(1000);
}
else if(g>r && g>b){// tom verde maiores que azul e vermelho
lcd.setCursor(0,1);
lcd.print("Verde ");
delay(1000);
}
else if(b>r && b>g){ // tom azul maiores que vermelho e verde
lcd.setCursor(0,1);
lcd.print("Azul ");
delay(1000);
}
}
}