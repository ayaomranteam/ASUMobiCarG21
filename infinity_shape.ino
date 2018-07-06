int motorControllA = 4;

int motorControllB = 2;

int motorControllC = 8;

int motorControllD = 12;


//speed
int enable1=9;
int enable2=10;

int speedcar;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(motorControllA, OUTPUT);
  pinMode(motorControllB, OUTPUT);
  pinMode(motorControllC, OUTPUT);
  pinMode(motorControllD, OUTPUT);
  
  //speed 
pinMode (enable1 ,OUTPUT);
pinMode (enable2 ,OUTPUT);}


void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0){
    
      char   data;
    data = Serial.read();
    Serial.write(Serial.read());
   
       
      Serial.println("DIRECTION IS " );
       Serial.println(data);
      delay(10000);
      

if(data='y'){  for(int g=1;g<30;g++){
                speedcar=80;
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        analogWrite(enable2, speedcar);
              delay(250);
                 speedcar=80;
        digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, LOW);
         analogWrite(enable1, speedcar);


        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
         analogWrite(enable2, speedcar);
         
  delay(250);
}

for(int g=1;g<30;g++){
                speedcar=80;
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        analogWrite(enable2, speedcar);
              delay(225);
                 speedcar=80;
        digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);


        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, LOW);
         analogWrite(enable2, speedcar);
           delay(225);
   
}}}}
