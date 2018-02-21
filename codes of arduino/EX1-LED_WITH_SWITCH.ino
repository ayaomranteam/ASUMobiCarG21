//led with button
 int ledPin = 12;
 int buttonPin = 2;
int value;
void setup(){
  pinMode(ledPin , OUTPUT);
pinMode(buttonPin , INPUT);}
void loop(){value=digitalRead(buttonPin);
if(value==HIGH)
{digitalWrite(ledPin,HIGH);
delay(1000);
digitalWrite(ledPin,LOW);
delay(1000);}
else{digitalWrite(ledPin,LOW);}}








