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

//function
void angle(float t) {
  if(t<180){speedcar =10
 ;}


else 
speedcar=90;

  //TURNLEFT
     //left
    
    
    
   
  float  constant=0.6369426752;
    float time=t*( 3.14/ 180)*constant;
    
  
   
    
     digitalWrite(motorControllA, HIGH);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, speedcar);


     digitalWrite(motorControllC,LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, speedcar);
     
     delay(time*1000);
      digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, speedcar);


     digitalWrite(motorControllC, LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, speedcar);
     
     } 

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0){
    
      char   data;
    data = Serial.read();
    Serial.write(Serial.read());
   
       
      Serial.println("DIRECTION IS " );
       Serial.println(data);
      delay(10000);
 if(data =='o')
              { Serial.println("enter theta");  
    
       
           String  theta= Serial.readString();
              Serial.println(Serial.read());
              Serial.println("theta IS : " );
              Serial.println(theta);
            float thetavalue = atof(theta.c_str());
            Serial.println("value is : " );
            Serial.println(thetavalue);
            
        angle(thetavalue);}

}}
