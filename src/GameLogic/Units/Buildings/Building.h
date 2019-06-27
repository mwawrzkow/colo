/*
 * Building.h
 *
 *  Created on: Jun 24, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_
#define SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_
#include <map>
namespace Units {

namespace Buildings{
	enum BuildingType{
		Iron,
		Copper,
		Gold,
		Diamond,
		Chrome,
		Ethyrald,
		Uran,
		Coal,
		Magnesium,
		citizens,
		trees
	};

class Building {
	int health;
	std::pair<int,int>Pos;
	std::pair<int,int>Surface;
	const BuildingType type;
	int inCome;
	int maintenance;
public:
	Building(std::pair<int,int>,std::pair<int,int>,BuildingType,int,int,int);
	const BuildingType typeOfBuilding()const;
	const int getIncome()const;
	virtual ~Building();
};

}/* namespace Buildings */
}/* namespace Player */
#endif /* SRC_GAMELOGIC_UNITS_BUILDINGS_BUILDING_H_ */
