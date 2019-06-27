/*
 * Build.h
 *
 *  Created on: Jun 24, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_PLAYERS_BUILDER_H_
#define SRC_GAMELOGIC_PLAYERS_BUILDER_H_

#include <memory>
#include <vector>

#include "../DeadNature/Ore.h"
#include "../Units/Buildings/Building.h"
namespace World {
class Map;
} /* namespace World */

namespace Build {
enum buildType{
	mine,
	barrack,
	wall
};



class Builder {
	std::shared_ptr<World::Map> Map;
	std::shared_ptr<std::vector<DeadNature::Ore>>Ores;
public:
	void set(std::shared_ptr<std::vector<DeadNature::Ore>>,std::shared_ptr<World::Map>);
	Units::Buildings::Building CreateBuilding(Units::Buildings::BuildingType,int,int);
	std::vector<std::pair<char,int>>price(Units::Buildings::BuildingType,int,int);
	virtual ~Builder();
};

} /* namespace Player */

#endif /* SRC_GAMELOGIC_PLAYERS_BUILDER_H_ */
