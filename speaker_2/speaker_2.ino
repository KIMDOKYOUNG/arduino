// 스피커 사용해보기
int notes[] = {392,392,330,349,392,440,440,392};
int times[] = {500,500,250,250,500,500,500,1000};
void setup() {
  // put your setup code here, to run once:
  for(int i = 0 ; i < 8; i++){
    tone(8, notes[i],times[i]);
    delay(times[i]);
    noTone(8);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
