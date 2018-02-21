//traffic light
int greenled=12;
int redled=10;
int yellowled=11;
int flash=0;


void setup(){
  pinMode(greenled,OUTPUT);
  pinMode(redled,OUTPUT);
  pinMode(yellowled,OUTPUT);
}
void loop(){
digitalWrite(greenled,HIGH);
digitalWrite(yellowled,LOW);
digitalWrite(redled,LOW);
delay(2000);
while(flash<3){
  digitalWrite(greenled,LOW);
digitalWrite(yellowled,HIGH);
delay(1000);
digitalWrite(yellowled,LOW);
delay(1000);
flash++;}
digitalWrite(redled,HIGH);
digitalWrite(yellowled,LOW);
digitalWrite(greenled,LOW);
delay(2000);
flash=0;
}

