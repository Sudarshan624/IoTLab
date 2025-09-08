// C++ code
//
int var;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var=analogRead(A0);
    Serial.println(var);
  if(var>850){
    Serial.println("dry");
  digitalWrite(13, HIGH);
}else{ // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
}// Wait for 1000 millisecond(s)
if(var<500){
  Serial.println("wetty");
  digitalWrite(13, HIGH);
}else{ // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
}// Wait for 1000 millisecond(s)
if(var>500 && var<850){
  Serial.println("moderate");
  digitalWrite(13, HIGH);
}else{ // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
}// Wait for 1000 millisecond(s)
}