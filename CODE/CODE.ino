// the setup routine runs once when you press reset:

int out=0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}
 
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  if(sensorValue)
  {
  digitalWrite(3,out);
  }
  else
  {
   digitalWrite(2,HIGH);
  }
  // print out the value you read:
  Serial.println(sensorValue);
  delay(100);      // delay in between reads for stability
}
