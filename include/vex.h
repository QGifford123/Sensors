#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"

extern vex::brain Brain;
extern vex::motor Motor1;
extern vex::motor Motor2;
extern vex::controller Controller;

extern vex::bumper bumpSwitch1;
extern vex::pot Potentiometer;
extern vex::optical opticalSensor;
extern vex::distance distanceSensor;
extern vex::inertial Inertial;

#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)