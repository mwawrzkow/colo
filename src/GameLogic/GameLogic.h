/*
 * GameLogic.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_GAMELOGIC_H_
#define SRC_GAMELOGIC_GAMELOGIC_H_

#include <vector>

#include "Map/Map.h"
#include "DeadNature/Ore.h"
#include "DeadNature/Tree.h"
namespace GameLogic {

class GameLogic {
	World::Map World;
	std::vector<DeadNature::Ore>Ores;
	std::vector<DeadNature::Tree>Trees;
public:
	GameLogic(const int, const int, float , const float);
	virtual ~GameLogic();
};

} /* namespace GameLogic */

#endif /* SRC_GAMELOGIC_GAMELOGIC_H_ */
