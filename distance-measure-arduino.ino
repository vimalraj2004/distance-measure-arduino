const int trig = 9;
const int echo = 10;

const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;
const int LED5 = 4;
const int LED6 = 3;
const int LED7 = 2;

long duration ;
float distance ;

void setup() 
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
  
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;
  Serial.println(distance);
  

  if ( distance >= 10  )
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1,LOW);
  }
  if(distance >= 20)
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2,LOW);
  
  }
   if ( distance >= 30  )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3,LOW);
  }
   if ( distance >= 40  )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4,LOW);
  }
   if ( distance >= 50  )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5,LOW);    
  }
   if ( distance >= 60  )
  {
    digitalWrite(LED6, HIGH);
  }
  else
  {
    digitalWrite(LED6,LOW);
  }
   if ( distance >= 70  )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7,LOW);
  }
}






