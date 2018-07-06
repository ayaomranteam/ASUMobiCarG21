int motorControllA = 4;

int motorControllB = 2;

int motorControllC = 8;

int motorControllD = 12;

//sensor
int  sensorLR=5;
int sensorCR=3;
int sensorRR=11;
int x=2;

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
  //sensor 
  pinMode (sensorLR ,INPUT);
  pinMode (sensorCR ,INPUT);
  pinMode (sensorRR ,INPUT);

  //speed 
pinMode (enable1 ,OUTPUT);
pinMode (enable2 ,OUTPUT);}

// function 
void Distance ( char d ,float X )
{
  float velocity =0.715; 
  float Z =1/ velocity  ;
  float time = Z*X;
  if(d=='D')
  {speedcar=200;
   
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        analogWrite(enable2, speedcar);
        delay (time*1000);
        digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, 0);


     digitalWrite(motorControllC, LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, 0);}
    
    if(d=='P'){
    digitalWrite(motorControllA, HIGH);
          digitalWrite(motorControllB, LOW);
        
          analogWrite(enable1, speedcar);

          digitalWrite(motorControllC, HIGH);
         
          digitalWrite(motorControllD, LOW);
         
          analogWrite(enable2, speedcar);
        delay (time*1000);
   digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, 0);


     digitalWrite(motorControllC, LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, 0);} 
     }
     
void angle(float t) 
{
  if(t<180)
{speedcar =90;}
  
 





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
     void circle (float rad){  
      float  speedcar1=255;  
      digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, HIGH);
    //analogWrite(enable1, speedcar1);
     analogWrite(enable1, 255);
     
     float  speedcar2=((rad-.5)/(rad+.5))*255;
      Serial.println("speedcar2");
     Serial.println(speedcar2);
     digitalWrite(motorControllC,LOW);
     digitalWrite(motorControllD, HIGH);
    // analogWrite(enable2, speedcar2);
     
   analogWrite(enable2,128);
     }  
     
     
void loop() {
   if(Serial.available() > 0){
    
      char   data;
    data = Serial.read();
    Serial.write(Serial.read());
   
       
      Serial.println("DIRECTION IS " );
       Serial.println(data);
      delay(10000);
   if(data =='D' ||data=='P')
              { Serial.println("enter");
           String  dist= Serial.readString();
              Serial.println(Serial.read());
              Serial.println("DISTANCE IS : " );
              Serial.println(dist);
            float distvalue = atof(dist.c_str());
            Serial.println("value is : " );
            Serial.println(distvalue);
            
         Distance(data ,distvalue);}
        // **********************************************************************************************************

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
//**********************************************************************************************************
             if(data == 'c'){
             /* String  rad= Serial.readString();
             Serial.println(Serial.read());
              Serial.println("rad IS : " );
              Serial.printl
              n(rad);
             float radvalue = atof(rad.c_str());
             circle(radvalue);
             Serial.println(radvalue);
             */for(int g=1;g<120;g++){
                speedcar=120;
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        analogWrite(enable2, speedcar);
              delay(300);
                 speedcar=120;
        digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);


        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, LOW);
         analogWrite(enable2, speedcar);
         delay(150);
             } 
            speedcar=0;
digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, speedcar);


     digitalWrite(motorControllC, LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, speedcar);
     delay (2500);




















             
             
             
             
             
             }

if(data='K'){  for(int g=1;g<30;g++){
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
}
speedcar=0;
digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, speedcar);


     digitalWrite(motorControllC, LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, speedcar);
     delay (25000);



  
  }


             
             
if(data=='V'){
  for(int k=0;k<5;k++ ){
  Distance('D',1);
digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, 0);


     digitalWrite(motorControllC, LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, 0);
     delay(1000);
angle(90);
} speedcar=0;
digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, LOW);
     analogWrite(enable1, speedcar);


     digitalWrite(motorControllC, LOW);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, speedcar);}
     
     
//********************************************************************************************************************        
 
      //   *****************************************************************************************************
         switch (data){
     case 'T':
      while(1){
    if(data=='G'){break;}
    Serial.println("track :D");
    if (!(digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&!(digitalRead(sensorRR))){
    //FORWARD
    speedcar=90;
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        analogWrite(enable2, speedcar);
        x=0;
 
    
    }

      if ((digitalRead(sensorLR))&&(digitalRead(sensorCR))&&!(digitalRead(sensorRR))){
      //TURNRIGHT
      speedcar=145;
      digitalWrite(motorControllA, LOW);
       digitalWrite(motorControllB, LOW);
       analogWrite(enable1, speedcar);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        analogWrite(enable2, speedcar);
        x=0;
       
      }
      if ((digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&(digitalRead(sensorRR))){
    //FORWARD
    speedcar=90;
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
        analogWrite(enable1, speedcar);

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        analogWrite(enable2, speedcar);
x=0;
      }
         if ((digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&!(digitalRead(sensorRR))){
         //TURNRIGHT
         speedcar=120;
     digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, LOW);
         analogWrite(enable1, speedcar);

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
         analogWrite(enable2, speedcar);
         x=0;
        }
    if (!(digitalRead(sensorLR))&&(digitalRead(sensorCR))&&(digitalRead(sensorRR))){
      //TURNLEFT
      speedcar=145;
        digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);


        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, LOW);
         analogWrite(enable2, speedcar);
         x=1;
      }
       if (!(digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&(digitalRead(sensorRR))){
      //TURNLEFT
      speedcar=120;
       digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         analogWrite(enable1, speedcar);

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, LOW);
         analogWrite(enable2, speedcar);}
 x=1;
    
    
    if ((digitalRead(sensorLR))&&(digitalRead(sensorCR))&&(digitalRead(sensorRR))&&x==0){
   //left
    speedcar=255;
     digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, HIGH);
     analogWrite(enable1, speedcar);


     digitalWrite(motorControllC, HIGH);
     digitalWrite(motorControllD, LOW);
     analogWrite(enable2, speedcar);

       if((digitalRead(sensorLR))&&(digitalRead(sensorCR))&&(digitalRead(sensorRR))&&x==1)
       {//RIGHT
        speedcar=255;
        digitalWrite(motorControllA, HIGH);
        digitalWrite(motorControllB, LOW);
        analogWrite(enable1, speedcar);

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
         analogWrite(enable2, speedcar);
          
          
          
          }
         
      }}
      break;
      
      case 'F': //FORWARD
      Serial.println("forward");
      speedcar=255;
          digitalWrite(motorControllA, LOW);
         // digitalWrite(motorControllB, LOW);
         //analogWrite(motorSpeed1, speedcar);

          digitalWrite(motorControllB, HIGH);
         // digitalWrite(motorControllD, LOW);
          analogWrite(enable1, speedcar);

          digitalWrite(motorControllC, LOW);
         // digitalWrite(motorControllF, LOW);
          //analogWrite(motorSpeed3, speedcar);

          digitalWrite(motorControllD, HIGH);
          //digitalWrite(motorControllH, LOW);
          analogWrite(enable2, speedcar);
          Serial.println("forward");
        break;
        
      case 'B': //REVERSE
      speedcar=255;
          digitalWrite(motorControllA, HIGH);
          Serial.println("Backward");
        

          digitalWrite(motorControllB, LOW);
        
          analogWrite(enable1, speedcar);

          digitalWrite(motorControllC, HIGH);
         

          digitalWrite(motorControllD, LOW);
         
          analogWrite(enable2, speedcar);
        break;
        
      case 'L': // LEFT
      speedcar=255;
          digitalWrite(motorControllA, LOW);
          Serial.println("left");
         // digitalWrite(motorControllB, );
          //analogWrite(motorSpeed1, speedcar);

          digitalWrite(motorControllB, HIGH);
          //digitalWrite(motorControllD, LOW);
          analogWrite(enable1, speedcar);

          digitalWrite(motorControllC, HIGH);
         // digitalWrite(motorControllF, HIGH);
          //analogWrite(motorSpeed3, speedcar);

          digitalWrite(motorControllD, LOW);
         // digitalWrite(motorControllH, HIGH);
          analogWrite(enable2, speedcar);
        break;
        
      case 'R': // RIGHT
      speedcar=255;
          digitalWrite(motorControllA, HIGH);
          Serial.println("Right");
          //digitalWrite(motorControllB, HIGH);
         // analogWrite(motorSpeed1, speedcar);

          digitalWrite(motorControllB, LOW);
         // digitalWrite(motorControllD, HIGH);
          analogWrite(enable1, speedcar);

          digitalWrite(motorControllC, LOW);
         // digitalWrite(motorControllF, LOW);
         // analogWrite(motorSpeed3, speedcar);

          digitalWrite(motorControllD, HIGH);
         // digitalWrite(motorControllH, LOW);
          analogWrite(enable2, speedcar);
        break;
        case 'S':
        speedcar=255;
         digitalWrite(motorControllA, LOW);
        

          digitalWrite(motorControllB, LOW);
        
          analogWrite(enable1, speedcar);

          digitalWrite(motorControllC, LOW);
         

          digitalWrite(motorControllD, LOW);
         
          analogWrite(enable2, speedcar);
   
  

    }}}
      

