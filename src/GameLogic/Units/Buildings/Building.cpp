/*
 * Building.cpp
 *
 *  Created on: Jun 24, 2019
 *      Author: mwawrzkow
 */

#include "Building.h"

namespace Units {
namespace Buildings {
Building::Building(std::pair<int, int> position, std::pair<int, int> surface,
		BuildingType type, int income, int maitance,int health) :
		Pos(position), Surface(surface), type(type), inCome(income), maintenance(
				maitance),health(health) {
	// TODO Auto-generated constructor stub

}

Building::~Building() {
	// TODO Auto-generated destructor stub
}
const int Building::getIncome()const
{
	return inCome;
}
const BuildingType Building::typeOfBuilding()const{
	return type;
}
}
} /* namespace Player */
