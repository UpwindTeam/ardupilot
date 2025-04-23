#include "mode.h"
#include "Plane.h"

bool ModeElipse::_enter()
{
    hal.console->printf("Entering mode ELIPSE!\n");
    return true;
}

void ModeElipse::update()
{
}

void ModeElipse::run()
{   
}

/* 
 */
void ModeElipse::stabilize()
{
}

/*
  
 */
void ModeElipse::stabilize_quaternion()
{
}
