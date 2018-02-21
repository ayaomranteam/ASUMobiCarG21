int ledPin = 13; 
int inPin1 = 7;
int inPin2 = 8;  
int val1   =0; 
int val2   =0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin1, INPUT);
  pinMode(inPin2, INPUT);    
}

void loop(){
  digitalWrite(ledPin,HIGH);
  delay(4000);
  digitalWrite(ledPin,LOW);
  delay(4000);
  val1 = digitalRead(inPin1); 
 val2 = digitalRead(inPin2); 
  if (val1 == HIGH) {         
    digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin,HIGH );
  delay(1000);} 
if (val2 == HIGH) {
   digitalWrite(ledPin, LOW);
  delay(8000);
  digitalWrite(ledPin,HIGH );
  delay(8000);} 
  
  
      

}
