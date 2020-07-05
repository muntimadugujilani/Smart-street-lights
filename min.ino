int s=2 ;
int led =11 ;
int led1=8 ;
int sup = 4 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(s,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(sup,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(sup,HIGH) ;
   int d=digitalRead(s);
    // Serial.println(d);
   if(d==1)
   {
    analogWrite(led,255);
    digitalWrite(led1,HIGH);
    Serial.println("motion deteced");
    Serial.println("delay for 20 sec");
    delay(11000);
   }
   else
   {
    analogWrite(led,15);
    digitalWrite(led1,LOW);
    Serial.println("no motion");
   }
}
