// =================================================================
// Programa: Ejemplo basico para generar secuencia de luces con leds
// Autor: Javier Saldarriaga Cano
// Fecha: Octubre 2024
// versión :1.0
// Email: Virtualaprendo@gmail.com
// =================================================================
int ledPins[] = {2, 4, 5, 18};  
int contaLed = 0; 
int numLeds= 4;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT); 
  }
}

void loop() {
  digitalWrite(ledPins[contaLed], HIGH); 
  delay(500); // Espera medio segundo
  digitalWrite(ledPins[contaLed], LOW); 
  contaLed = (contaLed == 4) ? 0 : contaLed + 1;
 
}