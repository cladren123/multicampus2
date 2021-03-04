void setup() {
  pinMode(11,OUTPUT);

}

void loop() {
  // ADC - 아날로그를 디지털로 바꾸기 위한 장치 (내부에 포함) : 10비트 1023
  // PWM 8bit = 0 ~ 255 까지
  
 digitalWrite(11,1);
 delay(9); //10% 90%

 digitalWrite(11,0);
 delay(1); //90% 10%
 
}
