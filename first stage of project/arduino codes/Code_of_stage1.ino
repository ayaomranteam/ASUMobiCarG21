int motorControllA = 4;
int motorControllB = 7;

int motorControllC = 8;
int motorControllD = 12;



int motorSpeed1 = 2;
int motorSpeed2 = 7;
int motorSpeed3 = 8;
int motorSpeed4 = 11;

int speedcar;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  
  pinMode(motorControllA, OUTPUT);
  pinMode(motorControllB, OUTPUT);
  pinMode(motorControllC, OUTPUT);
  pinMode(motorControllD, OUTPUT);
 
}

void loop() {
  if(Serial.available() > 0)
  {
    char data;
    data = Serial.read();
    Serial.write(Serial.read());

    switch (data)
    {
      
      case 'F': //FORWARD
      speedcar=255;
          digitalWrite(motorControllA, HIGH);
          digitalWrite(motorControllB, LOW);
          

          digitalWrite(motorControllC, HIGH);
          digitalWrite(motorControllD, LOW);
          

        
        break;
        
      case 'B': //REVERSE
      speedcar=255;
          digitalWrite(motorControllA, LOW);
          digitalWrite(motorControllB, HIGH);
          analogWrite(motorSpeed1, speedcar);

          digitalWrite(motorControllC, LOW);
          digitalWrite(motorControllD, HIGH);
          

         
        break;
        
      case 'L': // LEFT
      speedcar=255;
          digitalWrite(motorControllA, LOW);
          digitalWrite(motorControllB, LOW);
          

          digitalWrite(motorControllC, LOW);
          digitalWrite(motorControllD, HIGH);
          

         
        break;
        
      case 'R': // RIGHT
      speedcar=255;
          digitalWrite(motorControllA, LOW);
          digitalWrite(motorControllB, HIGH);
         

          digitalWrite(motorControllC, LOW);
          digitalWrite(motorControllD, LOW);
          

          
        break;
               
      default: //If bluetooth module receives any value not listed above, both motors turn off
          digitalWrite(motorControllA, LOW);
          digitalWrite(motorControllB, LOW);
          analogWrite(motorSpeed1, 0);

          digitalWrite(motorControllC, LOW);
          digitalWrite(motorControllD, LOW);
          analogWrite(motorSpeed2, 0);

         
    }
  }
}


