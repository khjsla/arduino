//단항 연산자

void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  int num1 = +2;
  int num2 = -4;

  num1 = -num1;
  Serial.print("num1 : ");
  Serial.println(num1);
  num2 = -num2;
  Serial.print("num2 : ");
  Serial.println(num2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
