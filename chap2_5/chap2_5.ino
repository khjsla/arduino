
int a = 4;
int b = 2;
int result;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(a);
  Serial.print(" + ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.print(a + b);

  Serial.print(a);
  Serial.print(" - ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.print(a - b);

  Serial.print(a);
  Serial.print(" X ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.print(a * b);

  Serial.print(a);
  Serial.print(" / ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.print(a / b);

  Serial.print(a);
  Serial.print(" % ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.print(a % b);
}
