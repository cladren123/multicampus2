// 왼쪽 노란색 전구 쪽 회로가 pullup
// 오른쪽 빨간색 전구 쪽 회로가 pulldown 입니다.


int pullup_push_btn = 12;
int pullup_btn_state = 0;
int pullup_led_pin = 8;

int pullup_led_state = 0;

int pulldown_push_btn = 11;
int pulldown_btn_state = 0;
int pulldown_led_pin = 9;

int pulldown_led_state = 0;


void setup() {
  Serial.begin(9600);
  pinMode(pullup_push_btn, INPUT);
  pinMode(pullup_led_pin, OUTPUT);

  pinMode(pulldown_push_btn, INPUT);
  pinMode(pulldown_led_pin, OUTPUT);

}

void loop() {
  delay(1000);
  //pullup - 1이 주로 들어온다.
  pullup_btn_state = digitalRead(pullup_push_btn);

  Serial.println(pullup_btn_state);

  if (pullup_btn_state == LOW)
  {
    if(pullup_led_state == LOW)
    {
    pullup_led_state = HIGH;
    }
    else if(pullup_led_state == HIGH)
    {
    pullup_led_state = LOW;
    }
    }


  digitalWrite(pullup_led_pin, pullup_led_state);


  //pulldown - 0이 주로 들어온다.
  pulldown_btn_state = digitalRead(pulldown_push_btn);
  
  //Serial.println(pulldown_btn_state);

  if(pulldown_btn_state == HIGH)
  {
    if(pulldown_led_state == LOW)
    {
      pulldown_led_state = HIGH;
      }
    else if(pulldown_led_state == HIGH)
    {
      pulldown_led_state = LOW;
      }
    }

    digitalWrite(pulldown_led_pin, pulldown_led_state);
  
}
