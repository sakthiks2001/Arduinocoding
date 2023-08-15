#include<Wire.h>
void setup(){
  Wire.begin(5);
  Wire.onRequest(d);
  Serial.begin(9600);
}
void loop(){
  delay(100);
}
void d(){
  Wire.write("1234567890");
  Serial.println("1234567890");
}
