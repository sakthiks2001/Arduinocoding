#include<LiquidCrystal.h>
int b1=10,b2=9,b3=8;
const int rs = 13, en = 12,d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal LCD(rs, en,d4,d5,d6, d7);
const int Motor1=1;
const int Motor2=0;
void setup() {
  pinMode(Motor1,OUTPUT);
  pinMode(Motor2,OUTPUT);
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  

}

void loop() {
  if(digitalRead(b1)==1){
  digitalWrite(Motor1,HIGH);
  digitalWrite(Motor2,LOW);
  delay(100);
  LCD.begin(16,2);
  LCD.clear();
  LCD.print("forward");
  }
  else if(digitalRead (b2)==1){
    digitalWrite(Motor1,LOW);
    digitalWrite(Motor2,HIGH);
    LCD.clear();
    LCD.begin(16,2);
    LCD.print("reverse");
  }
    else if(digitalRead(b3)==1){
      digitalWrite(Motor1,HIGH);
      digitalWrite(Motor2,HIGH);
      LCD.clear();
      LCD.begin(16,2);
      LCD.print("stop");  
    }

}
