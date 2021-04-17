void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //LED INITIALIZE
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH); //LED ON
  delay(1000) //1 second delay
  digitalWrite(8,LOW); //LED OFF
  delay(1000) //1 second delay
}
