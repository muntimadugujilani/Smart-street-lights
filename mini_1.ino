int led1 = 2 ;
int led2= 3 ;
int led3 = 4 ;
int led4 = 5 ;int led5 = 6 ;int led6 = 7 ;
int buzz = 8 ;
int ir = A0 ;
int ir1 = A1 ;
void setup() {   
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(buzz,OUTPUT);
  digitalWrite(buzz,HIGH);
}

void loop() {
  
  int d =analogRead(A0);
  Serial.println(d);
  int d1=analogRead(A2);
  if(d>50)
  {
    digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1,LOW);
    
  }
  if(d1>50)
  {
    digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
     digitalWrite(led5,HIGH);
     digitalWrite(led6,HIGH);
     delay(2000);
  }
  else
  {
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  } 
  
}
