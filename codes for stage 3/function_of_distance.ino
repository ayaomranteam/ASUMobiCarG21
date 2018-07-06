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

    
    if(d=='K'){
      speedcar=180;
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
     analogWrite(enable2, 0);}}
     void loop() {
   if(Serial.available() > 0){
    
      char   data;
    data = Serial.read();
    Serial.write(Serial.read());
   
       
      Serial.println("DIRECTION IS " );
       Serial.println(data);
      delay(10000);
   if(data =='D' ||data=='K')
              { Serial.println("enter");
           String  dist= Serial.readString();
              Serial.println(Serial.read());
              Serial.println("DISTANCE IS : " );
              Serial.println(dist);
            float distvalue = atof(dist.c_str());
            Serial.println("value is : " );
            Serial.println(distvalue);
            
         Distance(data ,distvalue);}}}
