# include <Liquid_Crystal.h>
# include <Servo.h>

LiquidCrystal lcd(8,9,4,5,6,7);
Servo myservo;
int tecla = A0;

void setup(){
  myservo.attach(A8); // pin del servo
  lcd.begin(16,2);
}

coid loop(){
  lcd.setCurso(0,0);
  lcd.print("electrotec,pe");
  lcd.setCursor(0,1);
  int valor = analogRead(tecla);
  if (valor >635 && valor <645)
  {
    myservo.write(180);
    lcd.print("SELECT");
    delay(1000);
    lcd.clear();
    }
    else if (valor >405 && valor <415)
  }
