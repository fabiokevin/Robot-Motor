void setup() 
{
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
}

void loop() 
{ 
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(1100);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);
}
