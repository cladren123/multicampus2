int inputValue = 0; // 가변저항
int convertValue = 0;

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

// 풀업 형식으로 평소에는 1의 값이 계속 들어온다. 버튼을 누르면 0의 값이 나온다.
int push_btn = 12;
int btn_state = 0;

int colorChoose = 0;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;


void setup() {
  Serial.begin(9600);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(push_btn, INPUT);
}

void loop() {
  inputValue = analogRead(A0); // 가변저항의 값
  convertValue = map(inputValue, 0, 1023, 0, 255);

  
  btn_state = digitalRead(push_btn);

  
 

  if(btn_state == 0)
  {
    colorChoose = colorChoose + 1;
    if(colorChoose == 3)
    {
      colorChoose = 0;
      }
    }



  if(colorChoose == 0)
  {
    redValue = convertValue;
    }
  else if(colorChoose == 1)
  {
    greenValue = convertValue;
    }
  else if(colorChoose == 2)
  {
    blueValue = convertValue;
    }

  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);

  delay(1000);
}
