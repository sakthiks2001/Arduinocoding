int LED1=1;
int LED2=2;
int LED3=3;
int LED4=4;
int LED5=5;
int LED6=6;
int LED7=7;
int LED8=8;
int button=0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if(digitalRead(button)==0){
    for(int i=1;i<=8;i++)
  {
    if(i%2==0)
    {
      digitalWrite(i,HIGH);
    }
    else
    {
      digitalWrite(i,LOW);
    }
    
  }delay(500);
    
  }
  else
  {
    for(int i=1;i<=8;i++)
  {
    if(i%2!=0)
    {
      digitalWrite(i,HIGH);
    }
    else
    {
      digitalWrite(i,LOW);
    }
    
  }delay(500);
  }
}
