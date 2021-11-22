int IRSensor =12;
int buzzer = 7;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IRSensor,INPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  int value = digitalRead(IRSensor); 
  Serial.print("Sensor value=");
  Serial.print(value);
  if (value==0)
    {
      digitalWrite(buzzer, HIGH);
    }
  else
    {
      digitalWrite(buzzer, LOW);
    }
delay(500);
}
