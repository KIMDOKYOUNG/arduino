// 2020/07/10 예제1 lcd에 조도센서 값과 초음파 센서 값 출력하기 
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
}


void loop()
{
  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  long duration = pulseIn(3,HIGH);

  if (duration == 0){
    return;
  }
  long distance = duration / 58.2;

  int light = analogRead(A0);
  
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("light : "); 
  lcd.print(light);
  lcd.setCursor(0,1);
  lcd.print("Distance : ");
  lcd.print(distance);
  lcd.print("cm");

  delay(100);
}
