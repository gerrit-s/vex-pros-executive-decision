#include "main.h"    // includes API.h and other headers
#include "lift.h"

void liftSet(int speed ) {
  motorSet(7, speed);
  motorSet(8, speed);
  motorSet(3, speed);
  motorSet(4, speed); 
}
