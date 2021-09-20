int kirmizi=9;
int yesil=10;
int mavi=11;
int kdeger;
int ydeger;
int mdeger;
void setup() {
pinMode(kirmizi,OUTPUT);
pinMode(yesil,OUTPUT);
pinMode(mavi,OUTPUT);
digitalWrite(kirmizi,HIGH);
digitalWrite(yesil,HIGH);
digitalWrite(mavi,HIGH);
}
void loop() {
kdeger=255;
ydeger=0;
mdeger=0;
for(int i=0;i<255;i++)
{
 ydeger+=1;
 kdeger-=1;
 analogWrite(yesil,255-ydeger);
 analogWrite(kirmizi,255-kdeger);
 delay(10);
}
kdeger=0;
ydeger=255;
mdeger=0;
for(int i=0;i<255;i++)
{
 mdeger+=1;
 ydeger-=1;
 analogWrite(mavi,255-mdeger);
 analogWrite(yesil,255-ydeger);
 delay(10);
}
kdeger=0;
ydeger=0;
mdeger=255;
for(int i=0;i<255;i++)
{
 kdeger+=1;
 mdeger-=1;
 analogWrite(kirmizi,255-kdeger);
 analogWrite(mavi,255-mdeger);
 delay(10);
}
}