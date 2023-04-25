 #include <nRF24L01.h>
#include <RF24.h>
#include <SPI.h>

const int pinCE = 9;
const int pinCSN = 10;
RF24 radio(pinCE, pinCSN);

// Single radio pipe address for the 2 nodes to communicate.
const uint64_t pipe = 0xE8E8F0F0E1LL;
 
int data[4];

int Up = 0;
int Down = 0;
int Left = 0;
int Right = 0;

void setup()
{
  Serial.begin(500000);
   radio.begin();
   radio.openWritingPipe(pipe);

   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
}
 
void loop()
{
  Up = digitalRead(2);
  Down = digitalRead(3);
  Left = digitalRead(4);
  Right = digitalRead(5);
  
  if(Up == HIGH){
    data[0] = 1;
  }else{
    data[0] = 0;
  }
  
  if(Down == HIGH){
    data[1] = 1;
  }else{
    data[1] = 0;
  }
  
  if(Left == HIGH){
    data[2] = 1;
  }else{
    data[2] = 0;
  }
  
  if(Right == HIGH){
    data[3] = 1;
  }else{
    data[3] = 0;
  }
   
   radio.write(data, sizeof data);
   delay(0);
}
