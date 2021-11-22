#define buzzer 7
void setup() 
{
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(digitalRead(12)== LOW)
  {
    tone(buzzer,450);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  else
  {
    delay(100);
  }
}
