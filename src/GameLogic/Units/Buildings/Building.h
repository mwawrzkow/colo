/*
 * Building.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_
#define SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_

namespace Buildings {

class Building {
	int health;
public:
	Building(int);
	virtual ~Building();
};

} /* namespace Buildings */

#endif /* SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_ */
