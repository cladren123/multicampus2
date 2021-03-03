
int time = 500;
int led_pin[3] = {9,10,11};
int led_value[3] = {LOW,LOW,LOW};
String read_LED;

void setup() {
  Serial.begin(9600);
  for (int i=0; i<3; i++)
  {
     pinMode(led_pin[i], OUTPUT);
  }
}



void loop() {
  if(Serial.available()>1)
  {
    int pin = 0;
    String data = Serial.readStringUntil("\n");

    if(data == "A0" && led_value[0] == LOW)
    {
      led_on(led_pin[0]);
      Serial.println("A0 압력, LED ON");
      led_value[0] = HIGH;
      }
    else if(data == "A0" && led_value[0] == HIGH)
    {
      led_off(led_pin[0]);
      Serial.println("A0 압력, LED OFF");
      led_value[0] = LOW;
      }
    else if(data=="A1" && led_value[1] == LOW )
    {
      led_on(led_pin[1]);
      Serial.println("A1 압력, LED ON");
      led_value[1] = HIGH;
      }
    else if(data == "A1" && led_value[1] == HIGH)
    {
      led_off(led_pin[1]);
      Serial.println("A1 압력, LED OFF");
      led_value[1] = LOW;
      }
     else if(data=="A2" && led_value[2] == LOW )
    {
      led_on(led_pin[2]);
      Serial.println("A2 압력, LED ON");
      led_value[2] = HIGH;
      }
    else if(data == "A2" && led_value[2] == HIGH)
    {
      led_off(led_pin[2]);
      Serial.println("A2 압력, LED OFF");
      led_value[2] = LOW;
    }
    
    } 
}

//ledon - 전달받은 핀 번호에 해당하는 led on
void led_on(int pin)
{
  digitalWrite(pin, HIGH);
  }

// 전달받은 핀 번호에 해당하는 led off
void led_off(int pin)
{
  digitalWrite(pin, LOW);
  }

// 모든 led off
  void led_alloff()
{
  for(int i = 0; i<3; i++)
  digitalWrite(led_pin[i], LOW);
  }

  
