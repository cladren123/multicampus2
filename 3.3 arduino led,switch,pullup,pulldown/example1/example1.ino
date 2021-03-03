
int inputdata = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
}

void loop() {
  if(Serial.available()>0)
  {
    inputdata = Serial.read();
    Serial.write(inputdata); // 아스키로 변하지 않고 그냥 보낸다. 
    // print함수는 1값을 아스키코드로 해석해서 데이터를전송
    // write함수는 1을 그대로 전송해서 시리얼모니터에서 아스키로 해석해서 출력
    // print는 주로 시리얼통신으로 시리얼모니터에 데이터 출력해서 테스트하는 용도
    // write는 통신상에서 주고받는 메시지를 전송할 때 사용 - 블루투스, 지그비통신 ... 통신에서 데이터 주고받을때
    Serial.write(1);
    Serial.print(",");
    Serial.print(1);
    Serial.print(inputdata); // 아스키로 변환해서 출력을 한다. 
    }

}
