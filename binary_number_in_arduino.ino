// C++ code
//
// taking pin numbers as veriable

int pin1= 8;
int pin2 = 9;
int pin3 = 10;
int pin4 = 11;
int pin5 = 12;
int i, wait = 750;
void setup()
{
  
  // declear pin modes.
  
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5,OUTPUT);
}

void loop()
{
  
  // frist all the LED is off
  
 digitalWrite(pin4,LOW);
 digitalWrite(pin3,LOW);
 digitalWrite(pin2,LOW);
 digitalWrite(pin1,LOW);
delay(wait);
i++;
  
if((i % 2) > 0)           // to detrmine number is odd or even
{ 
  digitalWrite(pin1, HIGH); 
} 
  else 
  {
    digitalWrite(pin1, LOW); 
  }
if((i % 4) > 1)          // to detrmine number is 2 bits
{ 
  digitalWrite(pin2, HIGH); 
} 
  else 
  { 
    digitalWrite(pin2, LOW); 
  }
if((i % 8) > 3)   // determine number is 3 bits
{ 
  digitalWrite(pin3, HIGH); 
} 
  else 
  { 
    digitalWrite(pin3, LOW); 
  }
if((i % 16) > 7)    // determine number is 4 bits
{ 
  digitalWrite(pin4, HIGH); 
} 
  else 
  { 
    digitalWrite(pin4, LOW); 
  }
if((i%32)>15)           // te determine number is 5 bits
{
  digitalWrite(pin5,HIGH);
}
  else
  {
    digitalWrite(pin5, LOW);
  }
delay(wait);


}
