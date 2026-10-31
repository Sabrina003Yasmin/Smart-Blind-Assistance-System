const int trigPin = 5;
const int echoPin = 18;
const int buzzerPin = 19;

float distance;
unsigned long duration;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(trigPin, LOW);
  digitalWrite(buzzerPin, LOW);

  Serial.println("Blind Assistance System Started");
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo duration
  duration = pulseIn(echoPin, HIGH, 30000UL);

  if (duration == 0) {
    Serial.println("No valid distance reading");
    noTone(buzzerPin);
    delay(100);
    return;
  }

  // Calculate distance in centimeters
  distance = duration * 0.0343 / 2.0;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Obstacle warning system
  if (distance <= 30) {
    tone(buzzerPin, 2000);  // Very close
    delay(60);
    noTone(buzzerPin);
    delay(60);
  }
  else if (distance <= 60) {
    tone(buzzerPin, 1500);
    delay(100);
    noTone(buzzerPin);
    delay(200);
  }
  else if (distance <= 100) {
    tone(buzzerPin, 1000);
    delay(100);
    noTone(buzzerPin);
    delay(500);
  }
  else {
    noTone(buzzerPin);
    delay(100);
  }
}
