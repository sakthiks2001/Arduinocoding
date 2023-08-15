void setup() {

 int j =5;
 for(j;j<13;j++){
   pinMode(j,OUTPUT); // Define all pins as output pins
  }
}
 

void loop() {
 for(int i=0;i<256;i++){
   byte a=i%2;
   byte b=(i/2)%2;
   byte c=(i/4)%2;
   byte d=(i/8)%2;
   byte e=(i/16)%2;
   byte f=(i/32)%2;
   byte g=(i/64)%2;
   byte h=(i/128)%2;
   digitalWrite(5,a);
   digitalWrite(6,b);
   digitalWrite(7,c);
   digitalWrite(8,d);
   digitalWrite(9,e);
   digitalWrite(10,f);
   digitalWrite(11,g);
   digitalWrite(12,h);
   delay(100);
 }
}
