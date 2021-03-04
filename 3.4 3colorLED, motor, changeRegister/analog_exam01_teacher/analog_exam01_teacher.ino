// 가변저항테스트

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  //가변저항에서 값을 읽어오기 - 0~1023
  //led : 0~255
  
  int inputVal = analogRead(A0);
  // int convertVal = (float)inputVal * 255/1023;

  int convertVal = map(inputVal, 0, 1023, 0,255); // 알아서 계산해줌
  // 입력값으로 전달되는 값의 범위를 이용해서 원하는 범위 값으로 변경할 수 있도록 지원하는 함수

  analogWrite(11, convertVal);
  
  Serial.print(inputVal);
  Serial.print("\t");
  Serial.println(convertVal);

  delay(100);
}
