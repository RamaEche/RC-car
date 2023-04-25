#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>
#include <SPI.h>
#include <Servo.h>

Servo servoDeDireccion;  
const int pinCE = 9; 
const int pinCSN = 10;
RF24 radio(pinCE, pinCSN);

// Single radio pipe address for the 2 nodes to communicate.
const uint64_t pipe = 0xE8E8F0F0E1LL;

int data[5];
int RotAngle = 10;
int CenterPos = 101;

void setup()
{
   Serial.begin(9600);
   radio.begin();
   radio.openReadingPipe(1,pipe);
   radio.startListening();

   servoDeDireccion.attach(5);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   
   servoDeDireccion.write(CenterPos);
}
 
void loop()
{   
   if (radio.available())
   {
      radio.read(data, sizeof data);
      if(data[0] == 1){
        digitalWrite(2, HIGH);
      }else{
        digitalWrite(2, LOW);
      }
      if(data[1] == 1){
        digitalWrite(3, HIGH);
      }else{
        digitalWrite(3, LOW);
      }
      if(data[2] == 1 && data[3] == 0){
        servoDeDireccion.write(CenterPos + RotAngle);
      }else if(data[3] == 1 && data[2] == 0){
        servoDeDireccion.write(CenterPos - RotAngle);
      }else{
        servoDeDireccion.write(CenterPos);
      }
      delay(10);
   }
}
