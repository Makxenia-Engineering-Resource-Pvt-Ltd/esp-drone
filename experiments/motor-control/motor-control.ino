int motor1 = 4;
int motor2 = 33;
int motor3 = 32;
int motor4 = 25;
int motorpin;
int motormode;
int motordir;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (1) {
    Serial.println("Select motor to Test");
    while (!Serial.available() > 0) {
    };
    if (Serial.available() > 0) {
      motorpin = Serial.parseInt();
      if (motorpin == 0) {
        break;
      }
      analogWrite(motorpin, 150);
      delay(1000);
      analogWrite(motorpin, 0);
    }
  }
  Serial.println("Choose motor mode");
  Serial.println("1: Roll");
  Serial.println("2: Pitch");
  Serial.println("3: Yaw");
  while (!Serial.available() > 0) {
  };
  if (Serial.available() > 0) {
    motormode = Serial.parseInt();
    if (motormode > 0 and motormode < 4) {
      if (motormode == 1) {
        Serial.println("Choose drone orientation");
        Serial.println("1: left");
        Serial.println("2: right");
        while (!Serial.available() > 0) {
        };
        if (Serial.available() > 0) {
          motordir = Serial.parseInt();
          if (!(motordir > 0 and motordir < 3)) {
            Serial.println("Invalid inputs");
          }
        }
      }
      if (motormode == 2) {
        Serial.println("Choose drone orientation");
        Serial.println("1: fwd");
        Serial.println("2: back");
        while (!Serial.available() > 0) {
        };
        if (Serial.available() > 0) {
          motordir = Serial.parseInt();
          if (!(motordir > 0 and motordir < 3)) {
            Serial.println("Invalid inputs");
          }
        }
      }
      if (motormode == 3) {
        Serial.println("Choose drone orientation");
        Serial.println("1: cw");
        Serial.println("2: ccw");
        while (!Serial.available() > 0) {
        };
        if (Serial.available() > 0) {
          motordir = Serial.parseInt();
          if (!(motordir > 0 and motordir < 3)) {
            Serial.println("Invalid inputs");
          }
        }
      }
    } else {
      Serial.println("Invalid Inputs");
    }
  }
  if (motormode == 1) {
    Roll();
  } else if (motormode == 2) {
    Pitch();
  } else if (motormode == 3) {
    Yaw();
  }
  delay(15000);
  Stop();
}

void loop() {
  // put your main code here, to run repeatedly:
}

void Roll() {
  //Left
  if (motordir == 1) {
    analogWrite(motor1, 50);
    analogWrite(motor2, 50);
    analogWrite(motor3, 150);
    analogWrite(motor4, 150);
  } else if (motordir == 2) {  //right
    analogWrite(motor1, 150);
    analogWrite(motor2, 150);
    analogWrite(motor3, 50);
    analogWrite(motor4, 50);
  }
}

void Pitch() {
  //fwd
  if (motordir == 1) {
    analogWrite(motor1, 50);
    analogWrite(motor2, 150);
    analogWrite(motor3, 150);
    analogWrite(motor4, 50);
  } else if (motordir == 2) {  //back
    analogWrite(motor1, 150);
    analogWrite(motor2, 50);
    analogWrite(motor3, 50);
    analogWrite(motor4, 150);
  }
}

void Yaw() {
  //cw
  if (motordir == 1) {
    analogWrite(motor1, 50);
    analogWrite(motor2, 50);
    analogWrite(motor3, 150);
    analogWrite(motor4, 150);
  } else if (motordir == 2) {  //ccw
    analogWrite(motor1, 150);
    analogWrite(motor2, 150);
    analogWrite(motor3, 50);
    analogWrite(motor4, 50);
  }
}

void Stop() {
  analogWrite(motor1, 0);
  analogWrite(motor2, 0);
  analogWrite(motor3, 0);
  analogWrite(motor4, 0);
}
