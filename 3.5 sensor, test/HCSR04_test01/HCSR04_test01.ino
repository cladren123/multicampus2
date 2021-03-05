void setup() {
 pinMode(10, OUTPUT); // 10번핀은 트리거로 사용
 pinMode(9, INPUT); // 9번핀은 에코로 사용

 Serial.begin(9600);

}

void loop() {
  // 초음파 신호 보내기
  digitalWrite(10, LOW);
  delayMicroseconds(2);

  digitalWrite(10, HIGH);
  delayMicroseconds(10);

  digitalWrite(10, LOW);

  // 초음파 신호 수신
  // 초음파를 발생시키고 수신할 때까지 측정하기 위해서 사용 - 얼마의 시간이 걸렸는지 계산
  // low -> high 로 변하는 시점부터 츠겅을 하는 경우 pulseIn 함수의 HIGH로 지정
  // high -> low 로 변하는 시점부터 측정 LOW로 정의
  // 마이크로초단위
  // 거리 = 340 * duration / 1000000 / 2

  double duration = pulseIn(9, HIGH);
  double distance = 340 * duration / 10000 / 2;

  // 측정거리를 출력
  Serial.println(distance);

  delay(1000);

}
