// 왼쪽 노란색 전구 쪽 회로가 pullup
// 오른쪽 빨간색 전구 쪽 회로가 pulldown 입니다.


int pullup_push_btn = 12;
int pullup_btn_state = 0;
int pullup_led_pin = 8;

int pulldown_push_btn = 11;
int pulldown_btn_state = 0;
int pulldown_led_pin = 9;


void setup() {
  Serial.begin(9600);
  pinMode(pullup_push_btn, INPUT);
  pinMode(pullup_led_pin, OUTPUT);

  pinMode(pulldown_push_btn, INPUT);
  pinMode(pulldown_led_pin, OUTPUT);

}

void loop() {
  //pullup - 1이 주로 들어온다.
  pullup_btn_state = digitalRead(pullup_push_btn);

  //Serial.println(pullup_btn_state);

  if (pullup_btn_state == LOW)
  {
    digitalWrite(pullup_led_pin, 1);
    }
   else
   {
    digitalWrite(pullup_led_pin, 0);
    }

  //pulldown - 0이 주로 들어온다.
  pulldown_btn_state = digitalRead(pulldown_push_btn);
  
  Serial.println(pulldown_btn_state);

  if(pulldown_btn_state == HIGH)
  {
    digitalWrite(pulldown_led_pin, HIGH);
    }
  else
  {
    digitalWrite(pulldown_led_pin, LOW);
    }
  
}
