void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);  


  
}

void loop() {
  // 아날로그 데이터 읽기 - 0~1023 사이값을 읽을 수 있다.
  // 어두울수록 숫자가 크다. 빛이 얼마나 세냐에 따라서 저항이 달리진다.
  // 어두울 때는 값이 커지고, 밝을 때는 값이 작아진다. => 큰값 어둠, 작은값 밝음
  // 100k 657 ~ 5 => 652
  // 10k  49 ~ 969 => 920  사잇값이 제일 크다. 빛의 세기에 따라 민감하게 반응하다.
  // 10k 보다 낮은 저항을 쓰거나 큰 저항을 쓰면 사잇값이 작아진다.
  
  // 저항을 뭘 주냐에 따라서 값이 달라진다. 

  int photoresistorVal = analogRead(A0);
  Serial.println(photoresistorVal);
  
  if(photoresistorVal > 500)
  {
   digitalWrite(13, HIGH);
    }
  else
  {
    digitalWrite(13, LOW);
    }
  
 delay(1000);
 
}
