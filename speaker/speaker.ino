// 스피커 사용해보기
int melody[] = {262,294,330,349,440,494,523} 
void setup() {
  // put your setup code here, to run once:
  for(int i = 0 ; i < 8; i++){
    tone(8, melody[i],250);
    delay(400);
    noTone(8);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
