int motorControllA = 4;
int motorControllB = 2;

int motorControllC = 8;
int motorControllD = 12;

//sensor
int  sensorLR=5;
int sensorCR=3;
int sensorRR=11;
void setup() {
  pinMode(motorControllA, OUTPUT);
  pinMode(motorControllB, OUTPUT);
  pinMode(motorControllC, OUTPUT);
  pinMode(motorControllD, OUTPUT);
  //sensor 
  pinMode (sensorLR ,INPUT);
  pinMode (sensorCR ,INPUT);
  pinMode (sensorRR ,INPUT);

 

}
void loop() {
  if (!(digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&!(digitalRead(sensorRR))){
    //FORWARD
   
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
        
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
       
 
    
    }

      if ((digitalRead(sensorLR))&&(digitalRead(sensorCR))&&!(digitalRead(sensorRR))){
      //TURNRIGHT
      
      digitalWrite(motorControllA, LOW);
       digitalWrite(motorControllB, LOW);
       

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
      
      }
      if ((digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&(digitalRead(sensorRR))){
    //FORWARD
   
    digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
        

      }
         if ((digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&!(digitalRead(sensorRR))){
         //TURNRIGHT
         
     digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, LOW);
        

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
         
        }
    if (!(digitalRead(sensorLR))&&(digitalRead(sensorCR))&&(digitalRead(sensorRR))){
      //TURNLEFT
      
        digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, LOW);
         

        

      }
       if (!(digitalRead(sensorLR))&&!(digitalRead(sensorCR))&&(digitalRead(sensorRR))){
      //TURNLEFT
     
       digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
         

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, LOW);
       }

    
    
    if ((digitalRead(sensorLR))&&(digitalRead(sensorCR))&&(digitalRead(sensorRR))
){
   //left
   

     digitalWrite(motorControllA, LOW);
     digitalWrite(motorControllB, HIGH);
     


     digitalWrite(motorControllC, HIGH);
     digitalWrite(motorControllD, LOW);
    

       if((digitalRead(sensorLR))&&(digitalRead(sensorCR))&&(digitalRead(sensorRR))
)
       {//RIGHT
        

        digitalWrite(motorControllA, HIGH);
        digitalWrite(motorControllB, LOW);
        


        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);
         

          
          
          
          }
         
      }

}
