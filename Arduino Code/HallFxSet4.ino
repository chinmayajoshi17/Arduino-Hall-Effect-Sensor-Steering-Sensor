const int hallFxAPin = A5;
const int hallFxBPin = A4;
const int hallFxCPin = A3;
const int hallFxDPin = A2;
const int photoresistorAPin = A0;
//bool digitalVal = LOW;
int analogValA = 0;
int analogValB = 0;
int analogValC = 0;
int analogValD = 0;
int photoresisotrA = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

  pinMode(hallFxAPin, INPUT);
  pinMode(hallFxBPin, INPUT);
  pinMode(hallFxCPin, INPUT);
  pinMode(hallFxDPin, INPUT);
  pinMode(photoresistorAPin, INPUT);

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
  //digitalVal = digitalRead(hallFxDPin);
  analogValA = analogRead(hallFxAPin);
  analogValB = analogRead(hallFxBPin);
  analogValC = analogRead(hallFxCPin);
  analogValD = analogRead(hallFxDPin);
  photoresisotrA = analogRead(photoresistorAPin);


  //Serial.print("Digital Reading = ");
  //Serial.println(digitalVal);  // Properly print the digital value

  Serial.print("Analog Reading A = ");
  Serial.println(analogValA);  // Properly print the analog value

  Serial.print("Analog Reading B = ");
  Serial.println(analogValB);  // Properly print the analog value

  Serial.print("Analog Reading C = ");
  Serial.println(analogValC);  // Properly print the analog value

  Serial.print("Analog Reading D = ");
  Serial.println(analogValD);  // Properly print the analog value

  Serial.print("Photoresistor Reading = ");
  Serial.println(photoresisotrA);  // Properly print the analog value
  Serial.println("---------------------------------");

  delay(100);
}
