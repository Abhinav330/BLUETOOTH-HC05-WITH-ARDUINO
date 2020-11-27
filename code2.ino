// This code is Designed by Mr.Abhinav / '#ATALL' Youtube channel. 
// Subscribe this channel --> https://www.youtube.com/channel/UCu-u_iadMXMZMEY7tHnEl_g
String x;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  digitalWrite(13, LOW);  
  
}
 
void loop() {
  
 if(Serial.available()>0)
   {
       x = Serial.readString();
       Serial.println(x);     
   } 
     
 if (x == "1")
   {
    digitalWrite(13,HIGH); 
   }
  else if (x =="0")
  {
    digitalWrite(13,LOW);
  }
   
   }
      
