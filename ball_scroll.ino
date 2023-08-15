#include<LiquidCrystal.h>
const int rs = 7, en=6,d4=8,d5=9,d6=10,d7=11;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10110,
  0b00100,
  0b01010
};

void setup() {
  lcd.begin(16,1);
  lcd.createChar(3,armsUp);
  lcd.setCursor(0,1);
  lcd.write(byte(0));



}

void loop() {
  lcd.setCursor(4,1);
  lcd.scrollDisplayRight();
  lcd.write(3);
  delay(100);
  

  

}
