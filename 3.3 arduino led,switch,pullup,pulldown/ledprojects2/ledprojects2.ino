
int time = 500;
int led_pin[3] = {13,12,11};
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
 
    read_LED=Serial.read();


    



    
   
    if(read_LED == "A0" && led_value[0] == LOW)
    {
      ledon(0);
      Serial.println("LED 1번 ON");
      led_value[0] = HIGH;
      }
    else if(read_LED == "A0" && led_value[0] == HIGH)
    {
      ledoff(0);
      Serial.println("LED 1번 OFF");
      led_value[0] = LOW;
      }

     delay(time);
 

}

void ledon(int inputNum)
{
  if (inputNum == 0)
  {
    digitalWrite(led_pin[0], 1);   
  }

  if (inputNum == 1)
  {
    digitalWrite(led_pin[1], 1);   
   }

  if (inputNum == 2)
  {
    digitalWrite(led_pin[2], 1);   
  }
    delay(time); 
  }

void ledoff(int inputNum)
{
  if (inputNum == 0)
  {
    digitalWrite(led_pin[0], LOW);   
    }
  if (inputNum == 1)
  {
    digitalWrite(led_pin[1], LOW);   
    }
  if (inputNum == 2)
  {
    digitalWrite(led_pin[2], LOW);   
    }
  delay(time); 
  }
