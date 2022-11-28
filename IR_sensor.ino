int sensor [] = {13, 12, 11, 10, 9, 8,7, 6, 5, 4, 3, 2, 1, 0, 14, 15};


void setup() {
 pinMode(13, INPUT);
 pinMode(12, INPUT);
 pinMode(11, INPUT);
 pinMode(10, INPUT);
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(1, OUTPUT);
 pinMode(0, OUTPUT);
 pinMode(14, OUTPUT);
 pinMode(15, OUTPUT);
 Serial.begin(9600);

}

void loop() {
 if (digitalRead(13) == HIGH)
 {
  digitalWrite(7, HIGH); //987 //654 //321 //0 14 15
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 digitalWrite(5, LOW);
 digitalWrite(4, LOW);
 digitalWrite(2, LOW);
 digitalWrite(1, LOW);
 digitalWrite(14, LOW);
 digitalWrite(15, LOW);
  delay(3000);

  }
  else if (digitalRead(12) == HIGH) //987 //654 //321 //0 14 15
  {
    digitalWrite(9, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(8, LOW);
 digitalWrite(7, LOW);
 digitalWrite(6, LOW);
 digitalWrite(5, LOW);
 digitalWrite(2, LOW);
 digitalWrite(1, LOW);
 digitalWrite(14, LOW);
 digitalWrite(15, LOW);
  delay(3000);
    }
   else if (digitalRead(11) == HIGH)
  {
    digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(0, HIGH);
   digitalWrite(8, LOW);
 digitalWrite(7, LOW);
 digitalWrite(5, LOW);
 digitalWrite(4, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(14, LOW);
 digitalWrite(15, LOW);
  delay(3000); 
  }
  else
  {
    digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(8, LOW);
 digitalWrite(7, LOW);
 digitalWrite(5, LOW);
 digitalWrite(4, LOW);
 digitalWrite(2, LOW);
 digitalWrite(1, LOW);
 digitalWrite(0, LOW);
 digitalWrite(14, LOW);
  delay(3000); 
  }
}
