#include <DHT.h>
#include <LiquidCrystal.h>

DHT mydht(A1, DHT11);
LiquidCrystal lcd(12, 11, 4, 5, 6, 7);



void setup() {

  Serial.begin(9600);

  mydht.begin();

  lcd.begin(16,2);
  

}

void loop() {

 // 조소 데이터 읽기
 int photoVal = analogRead(A0);
 Serial.print("빛의 세기 : ");
 Serial.println(photoVal);

 // DHT11 온습도센서 데이터 읽기
 int h = mydht.readHumidity();
 int t = mydht.readTemperature();


 Serial.print("습도 : ");
 Serial.print(h);
 Serial.print("  온도 : ");
 Serial.println(t);

 
 
if(photoVal >= 500)
{
  lcd.setCursor(0,0);
  lcd.print("Temp : ");
  lcd.print(t);
  lcd.setCursor(0,1);
  lcd.print("Humidity : ");
  lcd.print(h);
  }
else
{
  lcd.setCursor(0,0);
  lcd.print("             ");
  lcd.setCursor(0,1);
  lcd.print("             ");
  }

 
 


 delay(1000);

}
