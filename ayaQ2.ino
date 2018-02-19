int LED[] ={4,5,6,7};

void setup() {
  // put your setup code here, to run once:
  pinMode (LED[0] ,OUTPUT);  pinMode (LED[1] ,OUTPUT);
  pinMode (LED[2] ,OUTPUT);   pinMode(LED[3] ,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   for (int i=0 ; i<4; i++){
    if(i==3){
      for ( int m=3;m>0;m--){
        digitalWrite (LED[m],HIGH);
        delay (1000);
        digitalWrite(LED[m],LOW);
        delay(1000);
        }
      }
      else{
    digitalWrite (LED[i],HIGH);
    delay(1000);
    digitalWrite (LED[i],LOW);
    delay (1000);
    }}
}
