// C++ code
//
int outputs = 0;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  outputs = 400;
  digitalWrite(4, HIGH);
  delay(outputs); // Wait for outputs millisecond(s)
  digitalWrite(4, LOW);
  delay(outputs); // Wait for outputs millisecond(s)
  digitalWrite(3, HIGH);
  delay(outputs); // Wait for outputs millisecond(s)
  digitalWrite(3, LOW);
  delay(outputs); // Wait for outputs millisecond(s)
  digitalWrite(2, HIGH);
  delay(outputs); // Wait for outputs millisecond(s)
  digitalWrite(2, LOW);
  delay(outputs); // Wait for outputs millisecond(s)
}