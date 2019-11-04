# exp5-automatic-night-lamp
Automatically lighting a lamp using LDR. If the light around it is low, it will glow and vice versa

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
