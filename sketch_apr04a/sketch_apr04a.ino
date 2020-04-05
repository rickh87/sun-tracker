int westLED = 2;
int eastLED = 3;

int westSensor = A1;
int eastSensor = A0;
int westValue = 0;
int eastValue = 0;

void setup() {
  // solar panel sun tracker
  // set-up code. Analog pins do not need to be set up
  Serial.begin(9600);
  pinMode (westLED, OUTPUT);
  pinmode (eastLED, OUTPUT);
  digitalWrite (westLED, LOW);
  digitalWrite (eastLED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  westValue = analogRead(westSensor);
  eastValue = analogRead(eastSensor);
  Serial.print("westValue is: ");
  Serial.print(westValue, DEC);
  Serial.print("  eastValue is: ");
  Serial.println(eastValue, DEC);
  Serial
  if (westValue > 50){
        digitalWrite(westLED, HIGH)
  }
  if (eastValue > 50{
        digitalWrite(eastLED, HIGH
  }
  delay(200);
  digitalWrite(westLED, LOW)
  digitalWrite(eastLED, LOW);
}
