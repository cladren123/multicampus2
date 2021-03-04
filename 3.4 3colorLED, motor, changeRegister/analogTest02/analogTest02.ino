void setup() {
 Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  int inputVal = analogRead(A0);
  Serial.println(inputVal);

  // 가변저항값이 500이 넘으면 LED불이 켜지도록
  // 500이하값이면 불이 꺼지도록

  if (inputVal >= 500)
  {
    digitalWrite(11, HIGH);
    }
  else
  {
    digitalWrite(11, LOW);
    }

  delay(500);


 
}
