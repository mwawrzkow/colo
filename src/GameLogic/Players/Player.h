/*
 * Player.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_PLAYERS_PLAYER_H_
#define SRC_GAMELOGIC_PLAYERS_PLAYER_H_

#include <map>
#include <memory>
#include <vector>

#include "../DeadNature/Ore.h"
#include "../Units/Buildings/Building.h"
#include "Builder.h"


namespace Logic {
class Controller;
} /* namespace Game */

namespace Players {

class Player {
	std::map<char,float>magazine;
	/*
	 * i = iron
	 * c = copper
	 * g = gold
	 * d diamond
	 * c chrome
	 * e etyrald
	 * u uran
	 * C coal
	 * m magnesium
	 * w wood
	 * p citizens
	 */
	std::vector<Units::Buildings::Building>StaticUnits;
	//std::vector<nullptr>Units;
	Build::Builder builds;

public:
	Player(int iron, int copper,int wood, int gold);
	void playerTick();
	virtual ~Player();
	void putBuilding(int,int,Units::Buildings::BuildingType);
protected:
	void setBuild(std::shared_ptr<std::vector<DeadNature::Ore>>,std::shared_ptr<World::Map>);
	friend class Logic::Controller;
};

}
/* namespace DeadNature */

#endif /* SRC_GAMELOGIC_PLAYERS_PLAYER_H_ */
