int motorControllA = 4;
int motorControllB = 7;

int motorControllC = 8;
int motorControllD = 12;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(">> START<<");
  
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
      
   
        
      case 'B': //REVERSE
          digitalWrite(motorControllA, LOW);
          digitalWrite(motorControllB, HIGH);
          digitalWrite(motorControllC, LOW);
          digitalWrite(motorControllD, HIGH);
          

         
        break;
        
   

         
    }
  }
}


