#include <SPI.h>
#include <Servo.h>

Servo servoDeDireccion;

void setup()
{
   Serial.begin(9600);
   servoDeDireccion.attach(5);
}
 
void loop()
{
  servoDeDireccion.write(100);
  delay(1000);
  servoDeDireccion.write(120);
  delay(1000);
  servoDeDireccion.write(80);
  delay(1000);
}
