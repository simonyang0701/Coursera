/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
    HSLAPixel::HSLAPixel(){
		h = 0.0; // Hue of the pixel, in degree [0,360)
		s = 0.0; // Saturation of the pixel, [0,1]
		l = 1.0; // Luminance of the pixel, [0,1]
		a = 1.0; // Alpha of the pixel, [0,1]
	}

	HSLAPixel::HSLAPixel(double hue, double saturation, double luminance){
		h = hue; // Hue of the pixel, in degree [0,360)
		s = saturation; // Saturation of the pixel, [0,1]
		l = luminance; // Luminance of the pixel, [0,1]
		a = 1.0; // Alpha of the pixel, [0,1]
	}

	HSLAPixel::HSLAPixel(double hue, double saturation, double luminance, double alpha){
		h = hue; // Hue of the pixel, in degree [0,360)
		s = saturation; // Saturation of the pixel, [0,1]
		l = luminance; // Luminance of the pixel, [0,1]
		a = alpha; // Alpha of the pixel, [0,1]
	}
}
