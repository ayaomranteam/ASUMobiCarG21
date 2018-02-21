int timer = 1000;           
int ledPins[] = { 
  4,5,6,7 };       
int pinCount = 4;           

void setup() {
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++)  {
    pinMode(ledPins[thisPin], OUTPUT);      
  }
}

void loop() {
    for (int thisPin = 0; thisPin < pinCount; thisPin++) { 
   
    digitalWrite(ledPins[thisPin], HIGH);   
    delay(timer);                
        digitalWrite(ledPins[thisPin], LOW);    

  }

  
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) { 
    
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    
    digitalWrite(ledPins[thisPin], LOW);
  }
}
