// 2020/07/10 서보모터 실습4  초음파센서를 사용해서 서보모터 조절해보기 , 주차장 바리게이트에 활용될 수 있다.
#include <Servo.h>
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  myservo.write(180);
  myservo.attach(9);
}

void loop() {
  // 가변저항 부분 
  int rad = map(analogRead(A0),0,1023,0,120);// 저항을 각도로 변환 
  myservo.write(rad);// 120도 까지 돌아가면 다시 0도로 돌아감 
  delay(15);

  digitalWrite(2,LOW);
  delayMicroseconds(10);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  long distance = pulseIn(3,HIGH) /58;
  if(distance < 30) {
    myservo.write(180);
    delay(1000);
  } else{
    myservo.write(0);
    delay(1000);
  } 
  delay(100);
}
