#include<LiquidCrystal.h>
int r1=13,r2=12,r3=11,r4=10,c1=9,c2=8,c3=7,c4=6,d4=2,d5=3,d6=4,d7=5,rs=1,en=0;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT);
  pinMode(c4,INPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  if(digitalRead(c1)==1)
  {
   lcd.setCursor(0,1);
    lcd.print("7");
  }
  else if(digitalRead(c2)==1)
  {  lcd.setCursor(1,1); 
     lcd.print("8");
  }
  else if(digitalRead(c3)==1)
  {
    lcd.setCursor(0,1);
     lcd.print("9");
  }
   else if(digitalRead(c4)==1)
  {lcd.setCursor(0,1);
     lcd.print("%");
  }
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(r1,LOW);
  if(digitalRead(c1)==1)
  {lcd.setCursor(1,1);
    lcd.print("4");
  }
  else if(digitalRead(c2)==1)
  {lcd.setCursor(1,1);
     lcd.print("5");
  }
  else if(digitalRead(c3)==1)
  {lcd.setCursor(1,1);
     lcd.print("6");
  }
   else if(digitalRead(c4)==1)
  {lcd.setCursor(1,1);
     lcd.print("*");
  }
 digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  if(digitalRead(c1)==1)
  {lcd.setCursor(2,1);
    lcd.print("1");
  }
  else if(digitalRead(c2)==1)
  {lcd.setCursor(2,1);
     lcd.print("2");
  }
  else if(digitalRead(c3)==1)
  {lcd.setCursor(2,1);
     lcd.print("3");
  }
   else if(digitalRead(c4)==1)
  {lcd.setCursor(2,1);
     lcd.print("-");
  }
  digitalWrite(r4,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(r1,LOW);
  if(digitalRead(c1)==1)
  {
    lcd.print("ON/AC");
  }
  else if(digitalRead(c2)==1)
  {lcd.setCursor(3,1);
     lcd.print("0");
  }
  else if(digitalRead(c3)==1)
  {lcd.setCursor(3,1);
     lcd.print("=");
  }
   else if(digitalRead(c4)==1)
  {lcd.setCursor(3,1);
     lcd.print("+");
  }

}
