/*
 * Mine.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Mine.h"

namespace Buildings {

Mine::Mine(DeadNature::oreType type, int oreincome, int x, int y) :
		Building(350,x,y), type(type), oreIncome(oreincome) {

}
int Mine::gerResources() {
	return oreIncome;
}
const DeadNature::oreType Mine::getMiningOreType() const {
	return type;
}
Mine::~Mine() {
	// TODO Auto-generated destructor stub
}

} /* namespace Buildings */
