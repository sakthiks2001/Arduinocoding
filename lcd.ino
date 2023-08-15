#include<LiquidCrystal.h>
int B=13,LED=12;
const int rs = 2, en = 3,d0=4,d1=5,d2=6,d3=7,d4 = 8, d5 = 9, d6 = 10, d7 = 11;
LiquidCrystal lcd(rs, en, d0, d1, d2,d3,d4,d5,d6, d7);

void setup() 
{
pinMode(LED,OUTPUT);
pinMode(B,INPUT);
lcd.begin(16,2);
}

void loop() {
  if(digitalRead(13)==HIGH)
  {
    digitalWrite(12,HIGH);
    lcd.setCursor(0, 1);
    lcd.print("LED ON!!");
  }
  else
  {
    digitalWrite(12,LOW);
    lcd.setCursor(0, 1);
    lcd.print("LED OFF!!");
  }
  }
