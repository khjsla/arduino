void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200); //rule set

  int a = 1;
  int num = 9;

  //I have to change while TO do_while

  while (a < 10) {
    while (num > 0) {
      Serial.print(a);
      Serial.print(" X ");
      Serial.print(num);
      Serial.print(" = ");
      Serial.print(a * num--);
    }
    a++;
    num = 9;
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
