#define Pin13_Red 13
#define Pin12_Green 12
#define Pin11_Blue 11
#define Pin10_Red 10
#define Pin9_Green 9
#define Pin8_Blue 8
#define Pin7_Red 7
#define Pin6_Green 6
#define Pin5_Blue 5
#define Pin4_Red 4
#define Pin3_Green 3
#define Pin2_Blue 2

int start=0;
int End=0;

void leftToRight(int Start, int End) {

  for (int i = Start; i <= End; i += 3) {
    digitalWrite(i, HIGH);
    delay(500);
  }
}

void RightToLeft(int Start, int End) {

  for (int i = End; i <= Start; i -= 3) {
    digitalWrite(i, LOW);
    digitalWrite(i+1, HIGH);
    delay(500);
  }

}

void setup() {
  // put your setup code here, to run once:
  pinMode(Pin13_Red, OUTPUT);
  pinMode(Pin12_Green, OUTPUT);
  pinMode(Pin11_Blue, OUTPUT);
  pinMode(Pin10_Red, OUTPUT);
  pinMode(Pin9_Green, OUTPUT);
  pinMode(Pin8_Blue, OUTPUT);
  pinMode(Pin7_Red, OUTPUT);
  pinMode(Pin6_Green, OUTPUT);
  pinMode(Pin5_Blue, OUTPUT);
  pinMode(Pin4_Red, OUTPUT);
  pinMode(Pin3_Green, OUTPUT);
  pinMode(Pin2_Blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leftToRight((start+2)%5, (End+11)%13);
  RightToLeft( (start+2)%5,(End+11)%13);
}

