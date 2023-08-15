#include<Wire.h>
void setup() {
  Wire.begin();
  Wire.requestFrom(5,11);
  Serial.begin(9600);

}

void loop() {
  if(Wire.available()>0){
    char a=Wire.read();
    Serial.print(a);
  }
  


}
