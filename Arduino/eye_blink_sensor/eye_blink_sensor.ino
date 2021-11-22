int Sensor =12;
int buzzer = 2;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Sensor,INPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (digitalRead(Sensor))
    {
      digitalWrite(buzzer, HIGH);
      digitalWrite(LED_BUILTIN, LOW);
      delay(100);
    }
  else
    {
      digitalWrite(buzzer, LOW);
      digitalWrite(LED_BUILTIN, HIGH); 
      delay(100); 
    }
delay(500);
}
