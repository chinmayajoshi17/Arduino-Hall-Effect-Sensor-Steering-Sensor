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

int steeringValue = 0;

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

  Serial.println("HallFxA, HallFxB, HallFxC, HallFxD, PhotoresistorA");

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
  //Serial.println(digitalVal);  

  Serial.print(analogValA); 
  Serial.print(",  ");
  Serial.print(analogValB); 
  Serial.print(",  ");
  Serial.print(analogValC);
  Serial.print(",  ");
  Serial.print(analogValD);  
  Serial.print(",  ");
  Serial.print(photoresisotrA);
  Serial.println();

  
  if (hallFxAPin >= 270 && hallFxDPin >= 270 && hallFxBPin <= 150 && hallFxCPin <= 150) {
    steeringValue = 0;
    Serial.println("0, Straight");  

    
  }

  if (hallFxAPin <= 150 && hallFxDPin <= 270 && hallFxBPin >= 270 && hallFxCPin <= 270) {
    steeringValue = 1;
    Serial.println("+90, Right");  

  }

  if (hallFxAPin <= 270 && hallFxDPin <= 150 && hallFxBPin <= 270 && hallFxCPin >= 270) {
    steeringValue = -1;
    Serial.println("-90, Left");  

  }
  //Serial.println("---------------------------------");

  delay(100);
}
