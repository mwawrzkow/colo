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
void Vector::setDirectionOfVector(int x, int y){
	position.setPosition(x,y);
}
void Vector::setDirectionOfVector(int x, int y){
	position.setPosition(x,y);
}

//getters
const Position Vector::getPosition()const{
	return position;
}
const Position Vector::getDirection()const{
	return direction;
}
Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

} /* namespace Mathvector */
