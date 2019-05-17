/*
 * Position.cpp
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#include "Position.h"

namespace Math {

Position::Position() {
	// TODO Auto-generated constructor stub

}
//Setters
void Position::setheight(float  height){
	this->height = height;
}
//getters
const int Position::getHeight()const {
	return height;
}


Position::~Position() {
	// TODO Auto-generated destructor stub
}

} /* namespace Mathv */
