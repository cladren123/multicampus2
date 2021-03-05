int sensorTrigger = 8;
int sensorEcho = 7;

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int ledValue = 0;

void setup() {

 Serial.begin(9600);
 
 pinMode(sensorTrigger, OUTPUT); // 10번핀은 트리거로 사용
 pinMode(sensorEcho, INPUT); // 9번핀은 에코로 사용

 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
}

void loop() {
  // 초음파 신호 보내기
  digitalWrite(sensorTrigger, LOW);
  delayMicroseconds(2);

  digitalWrite(sensorTrigger, HIGH);
  delayMicroseconds(10);

  digitalWrite(sensorTrigger, LOW);


  double duration = pulseIn(sensorEcho, HIGH);
  double distance = 340 * duration / 10000 / 2;

  // 측정거리를 출력
  Serial.println(distance);

  ledValue = random(0,255);

  if(distance < 10 )
  {
    analogWrite(redPin, ledValue);
    analogWrite(bluePin, 0);
    analogWrite(greenPin, 0);
    }
  else if(distance < 15)
  {
    analogWrite(bluePin, ledValue);

    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    }
  else if(distance < 20)
  {
    analogWrite(greenPin, ledValue);

     analogWrite(redPin, 0);
     analogWrite(bluePin, 0);
    }
  else
  {
     analogWrite(redPin, 0);
     analogWrite(bluePin, 0);
     analogWrite(greenPin, 0);
    }

  

  delay(100);

}
