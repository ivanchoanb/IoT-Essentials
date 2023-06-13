# include <LiquidCrystal.h>
# include <Servo.h>

LiquidCrystal lcd(8,9,4,5,6,7);
Servo myservo;
int tecla = A0;

void setup(){
  myservo.attach(A8); // pin del servo
  lcd.begin(16,2);
}

void loop(){
  lcd.setCursor(0,0);
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
    {
      myservo.write(144);
      lcd.print ("LEFT");
      delay(1000);
      lcd.clear();
    }
    else if (valor > 250 && valor < 260)
    {
      myservo.write(108);
      lcd.print ("DOWN");
      delay(1000);
      lcd.clear();
    }
    else if (valor > 95 && valor < 105)
    {
      myservo.write(72);
      lcd.print ("UP");
      delay(1000);
      lcd.clear();
    }
    else if (valor == 0)
    {
      myservo.write(36);
      lcd.print ("RIGHT");
      delay(1000);
      lcd.clear();
    }
  }
