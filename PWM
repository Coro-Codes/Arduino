int d = 5;


void setup() 
{
 pinMode(6,OUTPUT); 
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);

}

void loop() {
 for( int a=0 ; a<256; a++)
{
analogWrite(6, a);
analogWrite(3, a);
analogWrite(5, a);

delay(d); 

}

for (int a=255; a>=0; a--)
{
analogWrite(6, a);
analogWrite(3, a);
analogWrite(5, a);

delay(d);
}
delay(100);
}
