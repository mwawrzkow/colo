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
#include "Players/Player.h"
#include <memory>
namespace Game{

class GameLogic {
	std::shared_ptr<World::Map> World;
	std::shared_ptr<std::vector<DeadNature::Ore>>Ores;
	std::shared_ptr<std::map<std::pair<int,int>,DeadNature::Tree>>Trees;
	std::vector<std::shared_ptr<Players::Player>>players;
public:
	GameLogic(const int, const int, float , const float);
	void AddPlayer(std::shared_ptr<Players::Player>);
	virtual ~GameLogic();
};

} /* namespace GameLogic */

#endif /* SRC_GAMELOGIC_GAMELOGIC_H_ */
