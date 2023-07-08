// Include the AccelStepper library:
#include <AccelStepper.h>

// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver:
#define dirPin 2
#define stepPin 3
#define motorInterfaceType 1
# define M0 10
# define M1 9
# define M2 8 


// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);


void setup() {
  // Set the maximum speed in steps per second:
  stepper.setMaxSpeed(1000);
  pinMode (M0 ,OUTPUT);
  pinMode (M1 ,OUTPUT);
  pinMode (M2 ,OUTPUT);
  digitalWrite (M0, HIGH);
  digitalWrite (M1, LOW);
  digitalWrite (M2, LOW);
}

void loop() {
  // Set the speed in steps per second:
  stepper.setSpeed(400);
  // Step the motor with a constant speed as set by setSpeed():
  stepper.runSpeed();
}
