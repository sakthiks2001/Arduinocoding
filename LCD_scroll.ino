#include<LiquidCrystal.h>
const int rs = 12, en = 11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal LCD(rs, en, d4, d5, d6,d7);
void setup() {
  LCD.begin(16,2);
  LCD.print("sakthi");
  delay(1000);
 

}

void loop() {
  int a;
  for(a=0;a<13;a++)
  {
    LCD.scrollDisplayLeft();
    delay(150);
  }
  for(int a=0;a<29;a++)
  {
    LCD.scrollDisplayRight();
    delay(150);
  }
  for(a=0;a<16;a++)
  {
    LCD.scrollDisplayLeft();
    delay(150);
  }
  delay(1000);

}
