const int pinLaser1 = 2;
const int pinReceiver1 = 3;
const int pinLaser2 = 8;
const int pinReceiver2 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLaser1, OUTPUT);
  pinMode(pinReceiver1, INPUT);
  digitalWrite(pinLaser1, HIGH);
  pinMode(pinLaser2, OUTPUT);
  pinMode(pinReceiver2, INPUT);
  digitalWrite(pinLaser2, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value1 = digitalRead(pinReceiver1);
  int value2 = digitalRead(pinReceiver2);
//  Serial.println(value);
  if(value1 == 0)
  {
      Serial.println("A Motion Detected");
  }
  else if (value2 == 0)
  {
    Serial.println("B Motion Detected");
  }
  else if (value == 1)
  {
     Serial.println(" Motion at A");
  }
  else
  {
    Serial.println(" Motion at B");
  }
  delay(500);
  
}
