// Define motor pins
int motor1Pin1 = 2;
int motor1Pin2 = 3;
int motor2Pin1 = 4;
int motor2Pin2 = 5;
int motor3Pin1 = 6;
int motor3Pin2 = 7;
int motor4Pin1 = 8;
int motor4Pin2 = 9;

void setup() {
  // Set all the motor pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(motor3Pin1, OUTPUT);
  pinMode(motor3Pin2, OUTPUT);
  pinMode(motor4Pin1, OUTPUT);
  pinMode(motor4Pin2, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}

void loop() {
  // Move forward
  moveForward();
  delay(5000);
  // Move backward
  //moveBackward();
  //delay(5000);
  // Turn right
  //turnRight();
  //delay(5000);  
  // Turn left
  turnLeft();
  delay(5000);

}

void moveForward() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  
  
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  
  digitalWrite(motor3Pin1, HIGH);
  digitalWrite(motor3Pin2, LOW);
  
  digitalWrite(motor4Pin1, HIGH);
  digitalWrite(motor4Pin2, LOW);
  analogWrite(A0, 255 );
  analogWrite(A1, 255 );
  analogWrite(A2, 255 );
  analogWrite(A3, 255 );
}

void moveBackward() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  
  digitalWrite(motor3Pin1, LOW);
  digitalWrite(motor3Pin2, HIGH);
  
  digitalWrite(motor4Pin1, LOW);
  digitalWrite(motor4Pin2, HIGH); 
}

void turnLeft() {
   digitalWrite(motor1Pin1, HIGH); 
   digitalWrite(motor1Pin2,LOW); 
   digitalWrite(motor2Pin1,HIGH); 
   digitalWrite(motor2Pin2,LOW); 
   digitalWrite(motor3Pin1,LOW); 
   digitalWrite(motor3Pin2,HIGH); 
   digitalWrite(motor4Pin1,LOW); 
   digitalWrite(motor4Pin2,HIGH);
   analogWrite(A0, 255 );
  analogWrite(A1, 255 );
  analogWrite(A2, 255 );
  analogWrite(A3, 255 );
}

void turnRight() {
   digitalWrite(motor1Pin1,HIGH); 
   digitalWrite(motor1Pin2,LOW); 
   digitalWrite(motor2Pin1,LOW); 
   digitalWrite(motor2Pin2,HIGH); 
   digitalWrite(motor3Pin1,LOW); 
   digitalWrite(motor3Pin2,HIGH); 
   digitalWrite(motor4Pin1,HIGH); 
   digitalWrite(motor4Pin2,LOW); 
}
