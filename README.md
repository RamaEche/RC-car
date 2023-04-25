# RC-car
Based on the following code and schematic, a remote-controlled car can be developed from scratch. There are several things that are not in this repository that are necessary to create the car, but they are assumed to be essential because there are many easy ways to do it.

## Final result:
![Car](https://user-images.githubusercontent.com/91381817/234392772-22f6ade5-3301-4d26-86f0-7a68695a4946.png)

The car has 2 motors with yellow DC3V-6V 200 gear motors in the back and a digital 360 Mg946 Mg 946 12kg servo motor in the front, connected to a homemade shaft that allows for forward and backward rotation of the wheels as well as side-to-side rotation (thanks to the servo motor).

## These are the schematics that were used to make the car and remote control:

### Car schematic (input: 7.4v):
![CarSchematic](https://user-images.githubusercontent.com/91381817/234387702-df02d0b0-4977-45e2-afdb-52a5536ff7e1.png)

### Remote control schematic (input: 9v):
![RemoteControlSchematic](https://user-images.githubusercontent.com/91381817/234387765-878ce5a0-ea26-4cb6-ace1-785439d52fc8.png)

Once the circuit is finished, the program is loaded. If the servo motor has problems, tests are carried out with the "ServoTestCode". Otherwise, the transmitter is loaded with the "Transmission Code" and the receiver with the "ReceptionCode".

IMPORTANT: If you want to use this schematic and code AND YOU ARE A BEGINNER, I do not recommend it because it is very likely that you will get lost along the way as you will have to find your own answers and do a large part of this project on your own way.
