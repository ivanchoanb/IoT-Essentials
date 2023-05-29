void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  int entrada = 0; // for incoming serial data
  entrada = Serial.available();
  if ( entrada == 1) {
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)  
  Serial.println("The pin 13 is lighting");
  }else{
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
}

