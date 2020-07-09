// 스피커 사용해보기, 고향의 봄 연주하기 
int notes[] = {392,392,330,349,392,440,440,392};
int notes2[] = {392,523,659,587,523,587};
int times[] = {500,500,250,250,500,500,500,1000};
int times2[] = {500,500,500,250,250,1500};
int notes3[] = {659,659,587,587,523,587,523,440,440, 392,392,392,330,294,262};
int times3[] = {500,500,500,500,500,250,250,500,500,500,500,500,250,250,1500};
void setup() {
  // put your setup code here, to run once:

  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH){
      for(int i = 0 ; i < 8; i++){
      tone(8, notes[i],times[i]);
      delay(times[i]);
      noTone(8);
    }
  }
  if (digitalRead(3) == HIGH){
      for(int i = 0 ; i < 6; i++){
      tone(8, notes2[i],times2[i]);
      delay(times2[i]);
      noTone(8);
    }
  }
  if (digitalRead(4) == HIGH){
      for(int i = 0 ; i < 15; i++){
      tone(8, notes3[i],times3[i]);
      delay(times3[i]);
      noTone(8);
    }
  }

}
