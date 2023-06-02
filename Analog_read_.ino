void setup() {
  // Comunicacion con velocidad de 9600 baudio o bits/segundo
  Serial.begin(9600);
}

// El ciclo a mantener
void loop() {
  // Conectamos la salida analoga de la mitad de potenciometro a un puerto analogo 
  int sensorValue = analogRead(A0);
  // impirmimos para ver en el serial monitor
  Serial.println(sensorValue);
  delay(100);        // Espacio entre la proxima lectura
}