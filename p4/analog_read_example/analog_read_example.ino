int varires = A0; // variable resistor pin number
int LED1 = 9; // LED 1 pin number 
int LED2 = 10; // LED 2 pin number
int value; // store vale generated by variable resistor

void setup() {
  // put your setup code here, to run once:
 pinMode(varires,INPUT); // pinmode input to get value from resistor
 // initialize digital pin LED(s) as an output.
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 value = analogRead(varires); // generated value from variable resistor is assigned to "value"
 if(value>50) // if value greater than 50 , then set LED 1 as high and LED 2 as low
 {
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW); 
 }
 else // else, set LED 2 as High and LED 1 as low
 {
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
 }
}
