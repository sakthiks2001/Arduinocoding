#include <LiquidCrystal.h>


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int thisChar = 'a';

void setup() {
 
  lcd.begin(16, 2);
  lcd.cursor();
}

void loop() {
  
  if (thisChar == 'm') {
    lcd.rightToLeft();
  }
  
  if (thisChar == 's') {
    
    lcd.leftToRight();
  }
  
  if (thisChar > 'z') {
   
    lcd.home();
    
    thisChar = 'a';
  }
  
  lcd.write(thisChar);
 
  delay(100);
  thisChar++;
}
