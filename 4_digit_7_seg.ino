int digit[10] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};

int digit1, digit2, digit3, digit4;
int num;

void setup()
{
  for (int i = 2; i < 9; i++)
  {
    pinMode(i, OUTPUT); 
  }
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop() {
  for (int j = 0; j <= 9999; j++)
  {
    num=j;
    digit4=num/1000;
    num%=1000;
    digit3=num/100;
    num%=100;
    digit2=num/10;
    digit1=num%10;
    for ( int k = 0; k < 2; k++)
    {
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      dis(digit2);
      delay(5);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      dis(digit3);
      delay(5);
      digitalWrite(11, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(12, LOW);
      dis(digit4);
      delay(5);
      digitalWrite(12, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      dis(digit1);
      delay(5);
    }
  }
}
void dis(int num)
{
  for (int i = 2; i < 9; i++)
  {
    digitalWrite(i, bitRead(digit[num], i - 2));
  }
}
