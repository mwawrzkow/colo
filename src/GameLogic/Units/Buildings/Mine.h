/*
 * Mine.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_UNITS_BUILDINGS_MINE_H_
#define SRC_GAMELOGIC_UNITS_BUILDINGS_MINE_H_

#include "Building.h"
#include "../../DeadNature/Ore.h"
namespace Buildings {

class Mine :public Building{
	DeadNature::oreType type;
	int oreIncome;
public:
	Mine(DeadNature::oreType type,int oreincome,int,int);
	int gerResources();
	const DeadNature::oreType getMiningOreType()const ;
	virtual ~Mine();
};

} /* namespace Buildings */

#endif /* SRC_GAMELOGIC_UNITS_BUILDINGS_MINE_H_ */
