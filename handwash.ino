const int IR = 26;
const int blue=18;
const int green=19;
const int red=21;

void setup() 
{
pinMode(IR,INPUT);  //IR sensor
pinMode(blue,OUTPUT); //RED
pinMode(green,OUTPUT); //GREEN
pinMode(red,OUTPUT); //BLUE
Serial.begin(9600);
  digitalWrite(blue,LOW); //RED off
  digitalWrite(green,LOW); //GREEN on by default
  digitalWrite(red,LOW); //BLUE off
}

void loop() 
{
  int a= digitalRead(IR);
  delay(100);
  if(a==0)
   { 
    digitalWrite(blue,HIGH); //RED off
    digitalWrite(green,LOW); //GREEN on by default
    digitalWrite(red,LOW); //BLUE off
            
       for(int i=0; i<20; i++)
         {
            digitalWrite(blue,HIGH);
            delay(1000);
         }  
     digitalWrite(blue,LOW);
     digitalWrite(green,HIGH);
     delay(3000);
     digitalWrite(green,LOW);
     digitalWrite(red,HIGH);
     delay(300);
     digitalWrite(red,LOW);
     delay(300);
     digitalWrite(red,HIGH);
     delay(300);
     digitalWrite(red,LOW);
  }

}