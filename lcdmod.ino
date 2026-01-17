#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int trig = 9;
const int echo = 10;

const int buzzer = 12;
const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;
const int LED5 = 4;
const int LED6 = 3;
const int LED7 = 2;

int duration=0;
int distance=0;

void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("WELCOME");
  delay(2000);
  lcd.clear();
  lcd.print("By Vimalraj and");
  lcd.setCursor(4, 1);
  lcd.print(" Venkat");
  delay(2000);
  lcd.clear();

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
   delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;
  Serial.println(distance);

  lcd.setCursor(0,0);  
  lcd.print("DISTANCE :"); 
  lcd.setCursor(0,1);   
  if(distance < 10){
    lcd.print("00");
    lcd.print(distance);
    lcd.print(" cm");
  } 
  if(distance >= 10 && distance < 100){
    lcd.print("0");
    lcd.print(distance);
    lcd.print(" cm");
  } 
 


  delay(250);


  
 if ( distance >=0 && distance < 10) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, HIGH);
    digitalWrite(LED7, HIGH);
    digitalWrite(buzzer, HIGH);   
    delay(100); 
    digitalWrite(buzzer, LOW);  
    delay(100);
  
}
     
  
  
  if (distance >=10  && distance < 20) {
    digitalWrite(LED7, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, HIGH);
    digitalWrite(buzzer, HIGH);   
    delay(300); 
    digitalWrite(buzzer, LOW);  
    delay(300);
   
     

  }
  if (distance >=20  && distance < 30) {
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    digitalWrite(buzzer, HIGH);   
    delay(700); 
    digitalWrite(buzzer, LOW);  
    delay(700); 
  } 
  if (distance >=30  && distance < 40) {
     digitalWrite(LED5, LOW);
     digitalWrite(LED6, LOW);
     digitalWrite(LED7, LOW);
     digitalWrite(LED1, HIGH);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, HIGH);
     digitalWrite(LED4, HIGH);
     digitalWrite(buzzer, LOW);  
     delay(500); 
  }
  if (distance >=40  && distance < 50) {
     digitalWrite(LED4, LOW);
     digitalWrite(LED5, LOW);
     digitalWrite(LED6, LOW);
     digitalWrite(LED7, LOW);
     digitalWrite(LED1, HIGH);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, HIGH);
     digitalWrite(buzzer, LOW);  
     delay(500); 
  }
  if (distance >=50  && distance < 60) {
     digitalWrite(LED3, LOW);
     digitalWrite(LED4, LOW);
     digitalWrite(LED5, LOW);
     digitalWrite(LED6, LOW);
     digitalWrite(LED7, LOW);
     digitalWrite(LED1, HIGH);
     digitalWrite(LED2, HIGH); 
     digitalWrite(buzzer, LOW);  
     delay(500);  
  }
  if (distance >=60  && distance < 70) {
     digitalWrite(LED2, LOW);
     digitalWrite(LED3, LOW);
     digitalWrite(LED4, LOW);
     digitalWrite(LED5, LOW);
     digitalWrite(LED6, LOW);
     digitalWrite(LED7, LOW);
     digitalWrite(LED1, HIGH); 
     digitalWrite(buzzer, LOW);  
     delay(500);    
  }
  