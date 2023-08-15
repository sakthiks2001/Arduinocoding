#include<LiquidCrystal.h>
LiquidCrystal lcd(0,1,2,3,4,5);
int LED=9;
int input=A0;
void setup() {
  lcd.begin(16,2);
  pinMode(LED,OUTPUT);
  pinMode(input,INPUT);
    
}

void loop() {
  int value = analogRead(input);
  lcd.setCursor(0,0);
  lcd.print("value:");
  lcd.print(value);
  
  lcd.setCursor(0,0);
  float voltage = value*5.0/1023.0;
  lcd.setCursor(0,1);
  lcd.print("voltage:");
  lcd.print(voltage);

}
