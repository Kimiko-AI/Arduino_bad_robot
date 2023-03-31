#include <SoftwareSerial.h>

SoftwareSerial BTSerial(5, 6); // RX | TX

int frontLeft = 1;
int frontRight = 2;
int backLeft = 3;
int backRight = 4;

void setup() {
  pinMode(frontLeft, OUTPUT);
  pinMode(frontRight, OUTPUT);
  pinMode(backLeft, OUTPUT);
  pinMode(backRight, OUTPUT);

  // Begin serial communication with Bluetooth module
  BTSerial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    char command = BTSerial.read();

    switch (command) {
      case 'F':
        Forward();
        break;

      case 'B':
        Backward();
        break;

      case 'L':
        Left();
        break;

      case 'R':
        Right();
        break;

      default:
        Stop();
    }
  }
}

void Forward() {
  digitalWrite(frontLeft, HIGH);
  digitalWrite(frontRight, HIGH);
  digitalWrite(backLeft, LOW);
  digitalWrite(backRight, LOW);
}

void Backward() {
  digitalWrite(backLeft, HIGH);
  digitalWrite(backRight, HIGH);
  digitalWrite(frontLeft, LOW);
  digitalWrite(frontRight, LOW);
}

void Left() {
  digitalWrite(frontRight, HIGH);
  digitalWrite(backLeft, HIGH);
}

void Right() {
  digitalWrite(frontLeft, HIGH);
  digitalWrite(backRight, HIGH);
}

void Stop() {
  digitalWrite(frontLeft, LOW);
  digitalWrite(frontRight, LOW);
  digitalWrite(backLeft, LOW);
  digitalWrite(backRight, LOW);
}
