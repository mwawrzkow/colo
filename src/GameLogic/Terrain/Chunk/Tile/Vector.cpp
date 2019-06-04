/*
 * Vector.cpp
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#include "Vector.h"

namespace Math {

Vector::Vector() {
	// TODO Auto-generated constructor stub

}
//setters
void Vector::setPositionOfVector(int x, int y) {
    if(x > 10 || x < 0)
        throw;
    else if(y > 10 || y < 0)
        throw; 
	xPos = x;
	yPos = y;
}
void Vector::setDirectionOfVector(int x, int y) {
	xDir = x;
	yDir = y;
}

//getters
const int Vector::getxPos() const {
	return xPos;
}
const int Vector::getyPos() const {
	return yPos;
}
const int Vector::getxDir() const {
	return xDir;
}
const int Vector::getyDir() const {
	return yDir;
}
Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

} /* namespace Mathvector */
