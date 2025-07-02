// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
}


void loop()
{
  if(digitalRead(8)==HIGH)
    digitalWrite(13,HIGH);
  digitalWrite(13,LOW);
  
  if(digitalRead(9)==HIGH)
    digitalWrite(12,HIGH);
  digitalWrite(12,LOW);
  
  if(digitalRead(10)==HIGH)
    digitalWrite(11,HIGH);
  digitalWrite(11,LOW);
}