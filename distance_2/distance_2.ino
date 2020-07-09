// 예제 2 초음파 센서 사용하기 , 거리에 따라 led 3개 차례로 켜기 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(2,LOW);// 초기화를 하기 위해서 껐다가 키는 것 
  //delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  long duration = pulseIn(3,HIGH);// 핀포트로 부터 신호가 들어올때가지의 시간 

  if(duration == 0){// 거리로 계산된 값이 없다 = 앞에 물체가 없다. 
    return;
  }

  long distance = duration / 58.2; // 초음파는 29.1마이크로 초마다 1cm 이동하므로, 갔다오는 거리는 58.2로 나누어줘야된다. 
  if (distance <10){
    digitalWrite(7,1);digitalWrite(6,1);digitalWrite(5,1);
  } else if (distance < 20){
    digitalWrite(7,1);digitalWrite(6,1);digitalWrite(5,0);
  } else if (distance < 30){
    digitalWrite(7,1);digitalWrite(6,0);digitalWrite(5,0);
  } else if (distance > 40){
    digitalWrite(7,0);digitalWrite(6,0);digitalWrite(5,0);
  }
  char pr [12];
  sprintf(pr,"distance = %d cm", distance);
  Serial.println(pr);
  delay(100);
}
