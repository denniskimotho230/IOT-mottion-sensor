int pirPin = 2;     
int ledPin = 13;    
int buzzerPin = 8;  
int motionState = 0;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  motionState = digitalRead(pirPin);

  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH); // Buzzer ON
    Serial.println("Motion Detected!");
  } 
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW); // Buzzer OFF
    Serial.println("No Motion");
  }

  delay(500);
}