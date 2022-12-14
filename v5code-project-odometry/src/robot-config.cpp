#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Motor15 = motor(PORT15, ratio18_1, false);
motor Motor16 = motor(PORT16, ratio18_1, true);
rotation Rotation1 = rotation(PORT1, false);
rotation Rotation2 = rotation(PORT2, true);
rotation Rotation3 = rotation(PORT3, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}