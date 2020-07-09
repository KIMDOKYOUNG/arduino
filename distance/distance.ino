// 초음파 센서 사용하기 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,LOW);// 초기화를 하기 위해서 껐다가 키는 것 
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  long duration = pulseIn(3,HIGH);// 핀포트로 부터 신호가 들어올때가지의 시간 

  if(duration == 0){// 거리로 계산된 값이 없다 = 앞에 물체가 없다. 
    return;
  }

  long distance = duration / 58.2; // 초음파는 29.1마이크로 초마다 1cm 이동하므로, 갔다오는 거리는 58.2로 나누어줘야된다. 

  char pr [12];
  sprintf(pr,"distance = %d cm", distance);
  Serial.println(pr);
  delay(100);
}
