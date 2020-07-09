# arduino 
## arduino uno
1. arduino 설명
2. blink 
	- 긴게 +, 짧은게 - 
	- +는 인풋으로 보고 13번에 꽂는다. 
	- -는 RND(ground)에 꽂는다. // 접지한다. 
# 소스코드
- ex1~4 : 기초 코드 
- botten : 버튼 사용해서 led 키기
	- 반딧불이 불 
- speaker : 피에조 스피커 사용
	- speaker3 : 버튼 3개 사용해서 고양의 봄 연주하기 
- serial : 조도 센서값을 시리얼 통신을 통해 전달받는다
	- serial_1 : 조도 센서값을 시리얼 모니터를 통해서 확인하기
	- serial_2 : 주위 밝기에 따라 LED가 켜지는 빛 감지기 
		- 밝으면 led 어둡게, 어두우면 led 밝게 -> map()함수 사용 
		- int light = analogRead(A0);
		- int ledLight = map(light, 0,1023,255,0);
	- serial_3 : serial_2 응용, led 2개 사용
		- led 1 : 밝으면 led 어둡게, 어두우면 led 밝게
		- led 2 : 밝으면 led 밝게, 어두우면 led 어둡게
	- serial_4 : 피에조 스피커를 사용해서 조도센서 값에 따라 소리 내기 
	- serial_5 : 주위 밝기에 따라 led가 켜지는 빛 감지기 만들기 , led 2개 , 소리내기, 버튼 누르면 3초간 꺼지기 
	- serial_6 : A0로 입력받은 조도센서 값이 600보다 크면 LED 꺼지고, 600보다 작으면 LED 켜지게 하기 
		- pinMode(12,OUTPUT);
		- ```int light = analogRead(A0);
		  if(light> 600 ){ // 600보다 밝으면 꺼지고 
		    digitalWrite(12,0);
		    delay(1000);
		  } else{// 600보다 어두우면 켜진다.
		    digitalWrite(12,1);
		    delay(1000);
		    ```
		- digitalWrite(12,0);
- distence : 초음파 센서 사용 
	- distence : 초음파 센서값을 시리얼 통신을 통해 전달받는다. 
	- distence_2: 초음파 센서 사용하기 , 거리에 따라 led 3개 차례로 켜기 
- 아두이노 lcd 1602 :
	- 한국어가 깨짐
	- 영어, 일본어는 된다.
	- 가변저항이 있으면 점퍼선 4개만 사용하면 된다. 
	
