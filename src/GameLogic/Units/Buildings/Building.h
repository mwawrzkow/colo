/*
 * Building.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_
#define SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_
#include <map>
namespace Buildings {

class Building {
	int health, x, y;
	float Iron = { }, Copper = { }, Gold = { }, Diamond = { }, Chrome = { },
			Ethyrald = { }, Uran = { }, Coal = { }, Magnesium = { }, Wood = {};
public:
	Building(int,int,int);
	void dealDamage(int);
	const int getHealth()const;
	virtual ~Building();
	bool isRuin();
	const std::pair<int,int> getPosition();
};

} /* namespace Buildings */

#endif /* SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_ */
