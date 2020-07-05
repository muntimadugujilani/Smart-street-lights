int c1=0,c2=0,c3=0,c4=0,c5=0 ;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10,OUTPUT) ;
  pinMode(12,OUTPUT) ;
  pinMode(11,OUTPUT) ;
  pinMode(9,OUTPUT) ;
  Serial.begin(9600) ;
}

void loop()
{ 
  int p1,p2,p3,p4 ;
  p1=digitalRead(3) ;
  p2=digitalRead(4) ;
  p3=digitalRead(5) ;
  p4=digitalRead(6) ;
  if(p1==HIGH)
  {
    c1=1 ;
    c2=1 ;
  } 
  if(p2==HIGH)
  {
    c2=1 ;
    c3=1 ;
  } 
  if(p3==HIGH)
  {
    c3=1 ;
    c4=1 ;
  }
  if(p4==HIGH)
  {
    c4=1 ;
    c5=1 ;
  }
  if(c1!=0)
  {
    digitalWrite(13,HIGH) ;
    c1+=1 ;
  }
  if(c1>100 && c1<150)
  {
    digitalWrite(13,LOW) ; 
  }
  if(c1==150)
  {
    c1=0 ; 
     digitalWrite(13,LOW) ;
  }
 
  // end of led1 control
  if(c2!=0)
  {
    digitalWrite(12,HIGH) ;
    c2+=1 ;
  }
  if(c2>100 && c2<150)
  {
    digitalWrite(12,LOW) ; 
  }
  if(c2==150)
  {
    c2=0 ; 
     digitalWrite(12,LOW) ;
  } 
  // end of led 2 control 
  if(c3!=0)
  {
    digitalWrite(11,HIGH) ;
    c3+=1 ;
  }
  if(c3>100 && c3<150)
  {
    digitalWrite(11,LOW) ; 
  }
  if(c3==150)
  {
    c3=0 ; 
     digitalWrite(11,LOW) ;
  }
  // end of led 3 control 
  if(c4!=0)
  {
    digitalWrite(10,HIGH) ;
    c4+=1 ;
  }
  if(c4>100 && c4<150)
  {
    digitalWrite(10,LOW) ; 
  }
  if(c4==150)
  {
    c4=0 ; 
     digitalWrite(10,LOW) ;
  } 
  //end of led4 control 
  if(c5!=0)
  {
    digitalWrite(9,HIGH) ;
    c5+=1 ;
  }
  if(c5>100 && c5<150)
  {
    digitalWrite(9,LOW) ; 
  }
  if(c5==150)
  {
    c5=0 ; 
     digitalWrite(9,LOW) ;
  } 
  Serial.println(c1) ;
  
}
