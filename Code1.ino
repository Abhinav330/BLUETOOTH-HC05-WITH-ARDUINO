//This code is Written by Mr. Abhinav / #ATALL youtube channel.
int x;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
  {
    x = Serial.read();
    Serial.println(x);
  }
}
