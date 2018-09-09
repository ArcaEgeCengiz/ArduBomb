#define red 13
#define Speaker 11
#define blue 8
#define Green 7

float times;
float delays = 1000;
float delays2 = 500;


void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(Speaker, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  myfunction();

}



void myfunction() {

  delays2 = delays2 / 2.0;
  digitalWrite(Green, HIGH);
  tone(Speaker, 2000, delays2);
  delay(delays2);
  digitalWrite(Green, LOW);
  delay(delays2);
  digitalWrite(Green, HIGH);
  tone(Speaker, 2000, delays2);
  delay(delays2);
  digitalWrite(Green, LOW);
  delay(delays2);
  digitalWrite(Green, HIGH);
  tone(Speaker, 2000, delays2);
  delay(delays2);
  digitalWrite(Green, LOW);
  delay(delays2);
  digitalWrite(Green, HIGH);
  tone(Speaker, 2000, delays2);
  delay(delays2);
  digitalWrite(Green, LOW);
  delay(delays2);

}
void loop() {
  Serial.println(digitalRead(2));
  delays = delays / 1.03;

  if (times < 1200) {
    times += 1;
    tone(Speaker, 4000, delays);
    digitalWrite(red, HIGH);
    delay(delays);
    digitalWrite(red, LOW);
    digitalWrite(Speaker, LOW);
    delay(delays);
  }
  if (times == 1200) {
    tone(Speaker, 500, 3000);
    digitalWrite(blue, HIGH);
    delay(19999999);

  }
  if (digitalRead(2) == LOW) {
    times = 1230;
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
    delay(1000);
    digitalWrite(blue, HIGH);
    delay(1000);
    digitalWrite(blue, LOW);
    defuse();
  }
}
void defuse() {
  
  digitalWrite(Green, HIGH);
  tone(Speaker, 2000, 100);
  delay(100);
  digitalWrite(Green, LOW);
  digitalWrite(blue, HIGH);
  tone(Speaker, 1000, 100);
  delay(100);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  tone(Speaker, 2000, 100);
  delay(100);
  digitalWrite(red, LOW);
  delay(100);
  digitalWrite(Green, HIGH);
  delay(1999999);
}
