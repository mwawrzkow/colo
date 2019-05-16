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
void Position::setPosition(int x , int y){
	this->x = x;
	this->y = y;
}
//getters
const int Position::getX()const {
	return x;
}
const int Position::getY()const{
	return y;
}

Position::~Position() {
	// TODO Auto-generated destructor stub
}

} /* namespace Mathv */
