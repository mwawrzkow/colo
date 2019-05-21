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
void Vector::setDirectionOfVector(int x, int y) {
	this->xPos = x;
	this->yPos = y;
}
void Vector::setDirectionOfVector(int x, int y) {
	this->xDir = x;
	this->yDir = y;
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
const int Vector::getxDir() const {
	return yDir;
}
Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

} /* namespace Mathvector */