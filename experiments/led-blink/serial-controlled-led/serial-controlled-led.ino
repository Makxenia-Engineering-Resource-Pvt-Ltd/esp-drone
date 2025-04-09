int led1 = 23;
int led2 = 5;
int led3 = 18;
char pattern;
void setup() {
  // put your setup code here, to run once:
  pinMode(led2, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    //pattern = Serial.read();
    pattern = Serial.parseInt();
    pattern = Serial.readString();
    pattern = Serial.
    Serial.print("Data you have sent is :");
    Serial.println(pattern);
  }
  if (pattern == 10) {
    alternateblink();
  } else if (pattern == 20) {
    runningled();
  } else if (pattern == 30) {
    random();
  } else {
    //Serial.println("Not a valid input!!");
  }
}

void alternateblink() {
  Serial.println("ALternate blink start");
  //Led 1 blink
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);

  //Led 2 blink
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);

  //Led 3 blink
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
  delay(500);
  Serial.println("ALternate blink stop");
}

void runningled() {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);
}

void random() {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(500);
}
