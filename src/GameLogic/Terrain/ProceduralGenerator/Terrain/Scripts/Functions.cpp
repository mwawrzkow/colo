/*
 * functions.cpp
 *
 *  Created on: May 28, 2019
 *      Author: mwawrzkow
 */
#include "Functions.h"
#include <math.h>
#include <limits>
namespace terrainfunctions {
float hill(int x, int y, float A, float B, float C) {
	float xtoFunction = x / 10.0f;
	float ytoFunction = y / 10.0f;
	float result = (A / (B * pow(xtoFunction, 2) + pow(ytoFunction, 2) + C))
			/ 10.f;
	if (result == std::numeric_limits<float>::infinity())
		result = 0;
	return result;
}

}

