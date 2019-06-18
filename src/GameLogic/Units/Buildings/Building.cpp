/*
 * Building.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Building.h"

namespace Buildings {

Building::Building(int health, int x, int y):health(health),x(x),y(y) {
	// TODO Auto-generated constructor stub

}
void Building::dealDamage(int damage){
	health -= damage;
}
const int Building::getHealth()const{
	return health;
}
bool Building::isRuin(){
	if(health <= 0)
		return true;
	return false;
}
const std::pair<int,int> Building::getPosition(){
return std::pair<int,int>(x,y);
}


Building::~Building() {
	// TODO Auto-generated destructor stub
}

} /* namespace Buildings */
