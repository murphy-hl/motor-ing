void setup()
{
  pinMode(10, OUTPUT);//D
  pinMode(11, OUTPUT);//C
  pinMode(12, OUTPUT);//B
  pinMode(13, OUTPUT); //A
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
        switch(income)
        {
          case '0':
            digitalWrite(10,LOW);   // 0 0000
            digitalWrite(11,LOW);    
            digitalWrite(12,LOW);
            digitalWrite(13,LOW);
              break;
            case '1':
            digitalWrite(10,LOW);   // 1 0001
            digitalWrite(11,LOW);    
            digitalWrite(12,LOW);
            digitalWrite(13,HIGH);
              break;
            case '2':
            digitalWrite(10,LOW);   // 2 0010
            digitalWrite(11,LOW);    
            digitalWrite(12,HIGH);
            digitalWrite(13,LOW);
              break;
            case '3':
             digitalWrite(10,LOW);   // 3 0011
            digitalWrite(11,LOW);    
            digitalWrite(12,HIGH);
            digitalWrite(13,HIGH);
              break;
            case '4':
            digitalWrite(10,LOW);   // 4 0100
            digitalWrite(11,HIGH);    
            digitalWrite(12,LOW);
            digitalWrite(13,LOW);
              break;
            case '5':
             digitalWrite(10,LOW);   // 5 0101
            digitalWrite(11,HIGH);    
            digitalWrite(12,LOW);
            digitalWrite(13,HIGH);
              break;
            case '6':
             digitalWrite(10,LOW);   // 6 0110
            digitalWrite(11,HIGH);    
            digitalWrite(12,HIGH);
            digitalWrite(13,LOW);
              break;
            case '7':
             digitalWrite(10,LOW);   // 7 0111
            digitalWrite(11,HIGH);    
            digitalWrite(12,HIGH);
            digitalWrite(13,HIGH);
              break;
            case '8':
             digitalWrite(10,HIGH);   // 8 1000
            digitalWrite(11,LOW);    
            digitalWrite(12,LOW);
            digitalWrite(13,LOW);
              break;
            case '9':
             digitalWrite(10,HIGH);   // 9 1001
            digitalWrite(11,LOW);    
            digitalWrite(12,LOW);
            digitalWrite(13,HIGH);
              break;
            default:
              break;
        }
    }
}

