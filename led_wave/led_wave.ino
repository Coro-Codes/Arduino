//Project #2 12/27/2021
// make cool series of flashing lights
int d= 100;

void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);

}

void loop() {
for (int a = 2;a<7;a++ )  
{

   digitalWrite(a, HIGH);
delay(d);
  digitalWrite(a, LOW);
  delay(d);

}

for (int a=5; a>1; a--)
{
 digitalWrite(a, HIGH);
delay(d);
  digitalWrite(a, LOW);
  delay(d);
  
}
}
