/*
 * Player.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_PLAYERS_PLAYER_H_
#define SRC_GAMELOGIC_PLAYERS_PLAYER_H_
#include <vector>
#include "../Units/Buildings/Home.h"
#include "../Units/Buildings/Mine.h"
namespace Player {

class Player {
	float Iron = { }, Copper = { }, Gold = { }, Diamond = { }, Chrome = { },
			Ethyrald = { }, Uran = { }, Coal = { }, Magnesium = { }, Wood = {};
	int citizens = {};
	std::vector<Buildings::Home> Homes;
	std::vector<Buildings::Mine> Mines;
public:
	Player(int iron, int copper,int wood, int gold);
	void playerTick();
	virtual ~Player();
};

}
/* namespace DeadNature */

#endif /* SRC_GAMELOGIC_PLAYERS_PLAYER_H_ */
