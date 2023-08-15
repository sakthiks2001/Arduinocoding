#include<LiquidCrystal.h>
const int rs = 12, en = 11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal LCD(rs, en, d4, d5, d6,d7);
void setup() {
  LCD.begin(16,2);

}

void loop() {
  int a;
  for(int a=0;a<10;a++)
  {
   LCD.setCursor(0,0);
   LCD.print(a);
   delay(500);
   LCD.setCursor(16,1);
   LCD.autoscroll();
  for(a=0;a<10;a++)
  {
    LCD.print(a);
    delay(500);
  }
  LCD.noAutoscroll();
  LCD.clear();
  }
}
