int j=0;
int i=0;
int led =8;
int button=0;
int signalvalue=0;
void setup() {
  // put your setup code here, to run once:
pinMode (button,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<6;i++)
{button=digitalRead (7);
if(button==HIGH)
j++;
signalvalue =analogRead(j);}
digitalWrite (led,HIGH);
delay(signalvalue);
digitalWrite (led,LOW);
delay(signalvalue);
}
