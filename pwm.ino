#include<LiquidCrystal.h>
int d4=2,d5=3,d6=4,d7=5,rs=1,en=0;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int LED=9;
void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  
  

}

void loop() {
  for(int i=0;i<256;i++);{
      analogWrite(9,250);
      float a=(250/(256.0*5.0));
      lcd.print(a);
      lcd.setCursor(0,1);
      delay(500);
    
  }


}
