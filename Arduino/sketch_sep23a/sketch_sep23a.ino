int IRSensor=12;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(12,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  IRSensor= analogRead(0);
  Serial.print("IRSensor");
  Serial.println(IRSensor);
  delay(1000);

}
