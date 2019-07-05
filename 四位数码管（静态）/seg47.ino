void setup()
{
  pinMode(2, OUTPUT);//1
  pinMode(3, OUTPUT);//2
  pinMode(4, OUTPUT);//3
  pinMode(5, OUTPUT);//4
  pinMode(10, OUTPUT);//D
  pinMode(11, OUTPUT);//C
  pinMode(12, OUTPUT);//B
  pinMode(13, OUTPUT); //A
  Serial.begin(9600);
}
int income=0;;
//int count =0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
    }
     switch(income)
    {
      case '8':
          digitalWrite(2,LOW);
          digitalWrite(3,HIGH);  
          digitalWrite(4,HIGH);  
          digitalWrite(5,HIGH);  
            digitalWrite(10,HIGH);   // 8 1000
            digitalWrite(11,LOW);    
            digitalWrite(12,LOW);
            digitalWrite(13,LOW);
            delay(1000);
            break;
      case '1':
            digitalWrite(3,LOW);
            digitalWrite(2,HIGH);  
            digitalWrite(4,HIGH);  
            digitalWrite(5,HIGH);  
            digitalWrite(10,LOW);   // 1 0001
            digitalWrite(11,LOW);    
            digitalWrite(12,LOW);
            digitalWrite(13,HIGH);
            delay(1000);
            break;
       case '2':
            digitalWrite(4,LOW);
            digitalWrite(2,HIGH);  
            digitalWrite(3,HIGH);  
            digitalWrite(5,HIGH);  
            digitalWrite(10,LOW);   // 2 0010
            digitalWrite(11,LOW);    
            digitalWrite(12,HIGH);
            digitalWrite(13,LOW);
            delay(1000);
            break;
       case '3':
            digitalWrite(5,LOW);
            digitalWrite(2,HIGH);  
            digitalWrite(3,HIGH);  
            digitalWrite(4,HIGH);  
             digitalWrite(10,LOW);   // 3 0011
            digitalWrite(11,LOW);    
            digitalWrite(12,HIGH);
            digitalWrite(13,HIGH);
            delay(1000);
            break;
       default:break;
    }
}

