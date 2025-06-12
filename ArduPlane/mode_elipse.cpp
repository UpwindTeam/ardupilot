#include "mode.h"
#include "Plane.h"

bool ModeElipse::_enter()
{
    hal.console->printf("Entering mode ELLIPSE!\n");
    //plane.throttle_allows_nudging = true;
    //plane.auto_throttle_mode = true;
    //plane.auto_navigation_mode = true;
    plane.do_ellipse();
    
    return true;
}

void ModeElipse::update()
{
    plane.update_ellipse();
    plane.calc_nav_roll();
    plane.calc_nav_pitch();
    plane.calc_throttle();
    //plane.next_WP_loc.set_alt_cm(plane.target_altitude.amsl_cm, Location::AltFrame::ABSOLUTE);
}
