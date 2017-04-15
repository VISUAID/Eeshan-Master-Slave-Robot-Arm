#include <Servo.h>

Servo base;       // create servo object to control base servo
Servo shoulder;   // create servo object to control shoulder servos
Servo elbow;      // create servo object to control elbow servo
Servo wrist;    // create servo object to control wrist servo
Servo gripper;    // create servo object to control gripper servo

int potpin4 = 4; // analog pin used to connect the base potentiometer
int potpin3 = 3; // analog pin used to connect the shoulder potentiometer
int potpin2 = 2; // analog pin used to connect the elbow potentiometer
int potpin1 = 1; // analog pin used to connect the wrist potentiometer
int potpin = 0;  // analog pin used to connect the gripper potentiometer

int val;  // variable to read the value from the base analog pin
int val1; // variable to read the value from the shoulder analog pin
int val2; // variable to read the value from the elbow analog pin
int val3; // variable to read the value from the wrist analog pin
int val4; // variable to read the value from the gripper analog pin

void setup()
{
    base.attach(3);     // attaches the servo on pin 3 to the servo object
    shoulder.attach(5); // attaches the servo on pin 5 to the servo object
    elbow.attach(6);    // attaches the servo on pin 6 to the servo object
    wrist.attach(9);    // attaches the servo on pin 9 to the servo object
    gripper.attach(10);  // attaches the servo on pin 10 to the servo object
}

void loop()
{
    val = analogRead(potpin4);       // reads the value of the base potentiometer (value between 0 and 1023)
    val = map(val, 0, 1023, 0, 179); // scale it to use it with the base servo (value between 0 and 180)
    base.write(val);                 // sets the base servo position according to the scaled value
    delay(15);                       // waits for the base servo to get there
    
    val1 = analogRead(potpin3);        // reads the value of the shoulder potentiometer (value between 0 and 1023)
    val1 = map(val1, 0, 1023, 0, 179); // scale it to use it with the shoulder servo (value between 0 and 180)
    shoulder.write(val1);              // sets the shoulder servo position according to the scaled value
    delay(15);                         // waits for the shoulder servo to get there
    
    val2 = analogRead(potpin2);        // reads the value of the elbow potentiometer (value between 0 and 1023)
    val2 = map(val2, 0, 1023, 0, 179); // scale it to use it with the elbow servo (value between 0 and 180)
    elbow.write(val2);                 // sets the elbow servo position according to the scaled value
    delay(15);                         // waits for the elbow servo to get there
    
    val3 = analogRead(potpin1);         // reads the value of the wrist potentiometer (value between 0 and 1023)
    val3 = map(val3, 0, 1023, 0, 179); // scale it to use it with the wrist servo (value between 0 and 180)
    gripper.write(val3);               // sets the wrist servo position according to the scaled value
    delay(15);                         // waits for the wrist servo to get there

    val4 = analogRead(potpin);         // reads the value of the gripper potentiometer (value between 0 and 1023)
    val4 = map(val4, 0, 1023, 0, 179); // scale it to use it with the gripper servo (value between 0 and 180)
    gripper.write(val4);               // sets the gripper servo position according to the scaled value
    delay(15);                         // waits for the gripper servo to get there
}
