void setup() 
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
 digitalWrite(7, LOW); 
 digitalWrite(8, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, LOW);
}
