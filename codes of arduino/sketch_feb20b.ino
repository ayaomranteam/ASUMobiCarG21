int led1= 0;
int led2 = 1;
int led3 = 2;
int led4 =3;
void setup() {
// put your setup code here, to run once: 
}

void loop() {
  //first led
  digitalWrite (led1,HIGH);
delay(1000);
digitalWrite (led1,LOW);
//second led
digitalWrite (led2,HIGH);
delay(1000);
digitalWrite (led2,LOW);
//third led
digitalWrite (led3,HIGH);
delay(1000);
digitalWrite (led3,LOW);
//fourth led
digitalWrite (led4,HIGH);
delay(1000);
digitalWrite (led4,LOW);
//3
digitalWrite (led3,HIGH);
delay(1000);
digitalWrite (led3,LOW);
//2
digitalWrite (led2,HIGH);
delay(1000);
digitalWrite (led2,LOW);
//1
digitalWrite (led1,HIGH);
delay(1000);
digitalWrite (led1,LOW);

}
