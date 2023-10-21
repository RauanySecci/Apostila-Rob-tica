#include <math.h> <br>
void setup () {
Serial.begin (115200); // Lembre-se de definir seu monitor serial como 115200
}
Thermister double (int RawADC) {
Temp double;
Temp = log (((10240000 / RawADC) - 10000));
Temp = 1 / (0,001129148 + (0,000234125 + (0,0000000876741 * Temp * Temp)) * Temp);
Temp = Temp - 273.15; // Converter de Kelvin em Celsius
// Para converter Celsius em Farenheith, escreva nesta linha: Temp = (Temp * 9.0) / 5.0 + 32.0;
return Temp;
}
void loop () {
int val; // Cria uma variável inteira
double temp; // variável de temperatura = temp
val = analogRead (0); // Leia o valor do pino analógico 0 e mantenha-o como val
temp = Thermister (val); // Realiza a conversão do valor analógico em graus Celsius
Serial.println (temp); // Grava a temperatura no monitor serial
delay (1000);
}