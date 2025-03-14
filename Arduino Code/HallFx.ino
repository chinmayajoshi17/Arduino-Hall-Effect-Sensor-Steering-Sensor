const int hallFxAPin = A5;
const int hallFxDPin = 11;
bool digitalVal = LOW;
int analogVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

  pinMode(hallFxAPin, INPUT);
  pinMode(hallFxDPin, INPUT);

  Serial.print("Setup Complete");
  
  for (int i = 0; i<4; i++){
    delay(500);
    Serial.print(".");
  }

  delay(500);

  for (int i = 0; i<4; i++){
    Serial.print(".");
    delay(200);
  }

  Serial.println();

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalVal = digitalRead(hallFxDPin);
  analogVal = analogRead(hallFxAPin);

  Serial.print("Digital Reading = ");
  Serial.println(digitalVal);  // Properly print the digital value

  Serial.print("Analog Reading = ");
  Serial.println(analogVal);  // Properly print the analog value

  Serial.println("---------------------------------");

  delay(100);
}
