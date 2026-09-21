#include "mode.h"
#include "Plane.h"

bool ModeElipse::_enter()
{
    hal.console->printf("Entering mode ELLIPSE!\n");
    plane.do_ellipse();
    return true;
}

void ModeElipse::update()
{
    plane.update_ellipse();
    plane.calc_nav_roll();
    plane.calc_nav_pitch();
    plane.calc_throttle();
}
