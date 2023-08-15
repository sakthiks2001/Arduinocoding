const int Motor1=1;
const int Motor2=2;

void setup() {
  pinMode(Motor1,OUTPUT);
  pinMode(Motor2,OUTPUT);

}

void loop(){
  digitalWrite(Motor1,HIGH);
  digitalWrite(Motor2,LOW);
  delay(100);

  
}
