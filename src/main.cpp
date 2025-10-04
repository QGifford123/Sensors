/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       test                                                      */
/*    Created:      10/4/2025, 10:32:11 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
motor Motor1 = motor(PORT1, ratio18_1, false);
motor Motor2 = motor(PORT2, ratio18_1, false);   

bumper bumpswitch = bumper(Brain.ThreeWirePort.A);
pot Potentiometer = pot(Brain.ThreeWirePort.C);
optical opticalSensor = optical(PORT19);
distance distanceSensor = distance(PORT10);
inertial Inertial = inertial(PORT11);

void detectTwoInputs() {

    /*Spin Motor1 when bump switch one is pressed and held and the distance
    reading of the distance sensor is less than 12 inches. */

}

void correctRotation() {

    /*While bump switch one is held down, rotate the wheel on Motor2 freely.
    Once it is released, automatically spin the wheel until it is back at 0 deg
    of rotation.*/

}

void scaleSpeed() {
    
    /*When button L1 is pressed on the controller, spin Motor2 at 80 percent.
    When it is pressed again, raise the speed to 90 percent. Subsequent presses
    of L1 should toggle between the two speed values*/

}

void colorDetection() {

    /*When the color sensor detects a red block, spin Motor1 forwards at 50 percent.
    When it detects a blue block, spin Motor1 reverse at 50 percent. Otherwise, brake
    Motor1. You have to find the proper color sensors bounds to reliably differentiate 
    the colors.*/

}


int main() {

    Brain.Screen.printAt( 10, 50, "Hello V5" );
   
    while(1) {
        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
