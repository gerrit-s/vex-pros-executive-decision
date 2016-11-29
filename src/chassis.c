#include "main.h"    // includes API.h and other headers
#include "chassis.h" // redundant, but ensures that the corresponding header file (chassis.h) is included

void chassisSet(int left, int right) {
  motorSet(9, left); //front left
  motorSet(10, -left); //back left
  motorSet(1, right); //back right
  motorSet(2, -right); //front right
}
