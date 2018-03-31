int motorControllA = 4;
int motorControllB = 7;

int motorControllC = 8;
int motorControllD = 12;

const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;
int lineOfSight = 15;                            // new var added for efficiency of code

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

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);                                        // this was output 


}

void loop() {



  if (Serial.available() > 0)
  {
    char data;
    data = Serial.read();
    Serial.write(Serial.read());

    //***
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration*0.034 / 2;
    Serial.print("Distance:");
    Serial.println(distance);
    //***

    if (distance > lineOfSight){                      // added if here to check we are in safe place
      switch (data)
      {

      case 'F': //FORWARD
        speedcar = 255;
        digitalWrite(motorControllA, HIGH);
        digitalWrite(motorControllB, LOW);


        digitalWrite(motorControllC, HIGH);
        digitalWrite(motorControllD, LOW);



        break;

      case 'B': //REVERSE
        speedcar = 255;
        digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, HIGH);
        analogWrite(motorSpeed1, speedcar);

        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);



        break;

      case 'L': // LEFT
        speedcar = 255;
        digitalWrite(motorControllA, LOW);
        digitalWrite(motorControllB, LOW);


        digitalWrite(motorControllC, LOW);
        digitalWrite(motorControllD, HIGH);



        break;

      case 'R': // RIGHT
        speedcar = 255;
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
    else{                           // if we are not safe stop the car immediately

      digitalWrite(motorControllA, LOW);
      digitalWrite(motorControllB, LOW);
      analogWrite(motorSpeed1, 0);

      digitalWrite(motorControllC, LOW);
      digitalWrite(motorControllD, LOW);
      analogWrite(motorSpeed2, 0);
    }
  }
}


