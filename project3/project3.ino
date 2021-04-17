void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT); //LED INITIALIZE
  pinMode(5,OUTPUT); //LED INITIALIZE
  pinMode(4,OUTPUT); //LED INITIALIZE
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,HIGH); //LED ON
  delay(3000) //1 second delay
  digitalWrite(6,LOW); //LED OFF
  digitalWrite(5,HIGH); //LED ON
  delay(1000) //1 second delay
  digitalWrite(5,LOW); //LED OFF
  digitalWrite(4,HIGH); //LED ON
  delay(3000) //1 second delay
  digitalWrite(8,LOW); //LED OFF
}
