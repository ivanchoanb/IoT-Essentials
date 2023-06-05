// Comprobamos primeramente el valor asiganado a las teclas que tiene 
// el Keypad Shield para arduino.

int tecla = A0;

void setup(){ 
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(tecla);
  Serial.println(valor);
  delay(500);
}