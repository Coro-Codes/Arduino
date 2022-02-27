#define LED 3
#define BUTTON 7
#define h 500 //I dont have to use 500. 
#define joeMommaSoFat 5000
 

void setup() {
 pinMode(LED, OUTPUT);
 pinMode(BUTTON, INPUT);
}


void loop() {
if ( digitalRead(BUTTON) == HIGH )
{digitalWrite(LED, HIGH);
delay(h);
digitalWrite(LED, LOW);
delay(500);
digitalWrite(LED, HIGH);
delay(500);
digitalWrite(LED, LOW);
delay(500);
digitalWrite(LED, HIGH);
delay(h);
digitalWrite(LED, LOW);
delay(500);
digitalWrite(LED, HIGH);
delay(joeMommaSoFat);
digitalWrite(LED, LOW);

}
}
