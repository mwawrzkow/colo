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
namespace GameLogic {

class GameLogic {
	World::Map World;
	std::vector<DeadNature::Ore>Ores;
	std::map<std::pair<int,int>,DeadNature::Tree>Trees;
	std::vector<Player::Player*>players;
public:
	GameLogic(const int, const int, float , const float);
	void AddPlayer(Player::Player*);
	virtual ~GameLogic();
};

} /* namespace GameLogic */

#endif /* SRC_GAMELOGIC_GAMELOGIC_H_ */
