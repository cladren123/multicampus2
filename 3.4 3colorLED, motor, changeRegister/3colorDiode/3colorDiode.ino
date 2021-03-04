int redLED = 11;
int greenLED = 10;
int blueLED = 9;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  Serial.begin(9600);
  for(int i =9; i<=11;i++)
  {
    pinMode(i, OUTPUT);
    }
}

void loop() {
  
  int redValue = random(0,256);
  int greenValue = random(0,256);
  int blueValue = random(0,256);

  Serial.print(redValue);
  Serial.print("\t");
  Serial.print(greenValue);
  Serial.print("\t");
  Serial.println(blueValue);



  analogWrite(redLED, redValue);
  analogWrite(greenLED, greenValue);
  analogWrite(blueLED, blueValue);

  delay(1000);
  
}
