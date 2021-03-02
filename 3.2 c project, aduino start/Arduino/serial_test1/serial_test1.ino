// 시리얼 통신 테스트

void setup() {
  // 시리얼통신을 시작 - 시리얼통신을 위한 기본 준비 9600은 통신 속도
  Serial.begin(9600); // 통신속도 맞추기

}

void loop() {
  //Serial.println("Hello world~~~");

  // Serial.available() - 값이 들어온게 있는지 확인하는 함수 (데이터가 있으면 True, 없으면 False)
  if(Serial.available())
  {
    // Serial.read() - PC에서 보낸 값을 1byte 단위로 읽어서 리턴
    Serial.println(Serial.read());
  }
  delay(1000);
}
