int sp=A0;
int lp=13;
int sv=0;
void setup()
{
  Serial.begin(9600);
  pinMode(lp,OUTPUT);
}
void loop()
{
  sensorvalue=analogRead(sp);
  Serial.println(sv);
 delay(100);
  if(sensorvalue>300)
    digitalWrite(lp,HIGH);
  else
     digitalWrite(lp,LOW);
    
}
