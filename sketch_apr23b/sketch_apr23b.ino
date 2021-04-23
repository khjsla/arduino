int a = 4;
int b = 2;
int result = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
  result = a + b;
  Serial.println(result);
  result = a - b;
  Serial.println(result);
  result = a * b;
  Serial.println(result);
  result = a / b;
  Serial.println(result);
  result = a % b;
  Serial.println(result);

  delay(1000);
}
