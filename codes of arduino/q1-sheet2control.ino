int switch1 =8;
int switch2 =1;
int switch3 =2;
int switch4 =3;
int switch5 =4;
int switch6 =5;
int switch7 =6;
int switch8 =7;
int j=0;
int duration;
int led=8; //pin used for the output pulse
void setup() {
  // put your setup code here, to run once:
pinMode (switch1,OUTPUT);
pinMode (switch2,OUTPUT);
pinMode (switch3,OUTPUT);
pinMode (switch4,OUTPUT);
pinMode (switch5,OUTPUT);
pinMode (switch6,OUTPUT);
pinMode (switch7,OUTPUT);
pinMode (switch8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:  
if (switch1 ==HIGH)
j=j+1;
if (switch2 ==HIGH)
j=j+2;

if (switch3 ==HIGH)
j=j+4;

if (switch4 ==HIGH)
j=j+8;

if (switch5 ==HIGH)
j=j+16;

if (switch6 ==HIGH)
j=j+32;

if (switch7 ==HIGH)
j=j+64;

if (switch8 ==HIGH)
j=j+128;

duration =j*4;
digitalWrite (led,HIGH);
delay(duration);
digitalWrite (led,LOW);
delay(duration);

}
