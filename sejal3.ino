//int LEDpin = 13;
int obstaclePin = 12;
int hasObstacle = LOW;  // LOW MEANS NO OBSTACLE
int buzz = 5;
int mot = 6;

void setup() {
  //pinMode(LEDpin, OUTPUT);
  pinMode(obstaclePin, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(mot, OUTPUT);

 // Serial.begin(9600);
}

void loop() {
  hasObstacle = digitalRead(obstaclePin);

  if (hasObstacle == HIGH) {
  //  Serial.println("Stop something is ahead!!");
    //digitalWrite(LEDpin, HIGH);
    digitalWrite(buzz, HIGH);
    digitalWrite(mot, HIGH);
    
  }
  else {
    //Serial.println("Path is clear");
    //digitalWrite(LEDpin, LOW);
    digitalWrite(buzz, LOW);
    digitalWrite(mot, LOW);
  }
  delay(200);
}
