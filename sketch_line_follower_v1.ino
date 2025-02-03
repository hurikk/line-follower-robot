#define IN1 11
#define IN2 10
#define IN3 9
#define IN4 6

#define LEFT_SENSOR 4
#define RIGHT_SENSOR 2

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(LEFT_SENSOR, INPUT);
  pinMode(RIGHT_SENSOR, INPUT);

}

void loop(){

  if (digitalRead(LEFT_SENSOR) == 0 && digitalRead(RIGHT_SENSOR) == 1) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (digitalRead(LEFT_SENSOR) == 1 && digitalRead(RIGHT_SENSOR) == 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else if (digitalRead(LEFT_SENSOR) == 0 && digitalRead(RIGHT_SENSOR) == 0) {
    digitalWrite(IN1, LOW);
    analogWrite(IN2, 120);
    analogWrite(IN3, 120);
    digitalWrite(IN4, LOW);
  } else if (digitalRead(LEFT_SENSOR) == 1 && digitalRead(RIGHT_SENSOR) == 1) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }

}