//dht11 온도랑 습도 측정

#include <DHT.h>
DHT mydht11(A1, DHT11); // DHT를 제어하기 위해 DHT11 객체 생성



void setup() {
  Serial.begin(9600);
  mydht11.begin();

}

void loop() {
  delay(2000); // 측정시 2초 이상 간격필요

  //DHT11 온습도센서 읽기
  float h = mydht11.readHumidity(); // 습도
  float t = mydht11.readTemperature(); // 섭씨 온도 
  float ft = mydht11.readTemperature(true); // 화씨 온도 


  // 센서를 출력하기
  Serial.print("Humidity : ");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature : ");
  Serial.print(t);
  Serial.print("'c ");
  Serial.print(ft);
  Serial.println("'F\t ");
  Serial.println("================================================================================");
  
  

  

}
