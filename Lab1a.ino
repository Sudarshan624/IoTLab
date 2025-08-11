void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  int arr[5]={4,2,7,8,13};
  for(int i=0;i<5;i++){
  digitalWrite(arr[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(arr[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  for(int i=5;i>=0;i--){
  digitalWrite(arr[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(arr[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
}
