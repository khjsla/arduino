int a = 4;
int b = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
  a += b;
  Serial.println(a);
  delay(1000);
}
