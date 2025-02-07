/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  class HSLAPixel
  {
  public:
    double h; // hue, degree on a color wheel between 0 and 360
    double s; // saturation
    double l; // luminance
    double a; // alpha
  };
}
