/*
 * Player.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_PLAYERS_PLAYER_H_
#define SRC_GAMELOGIC_PLAYERS_PLAYER_H_

namespace Player {

class Player {
	float Iron = { }, Copper = { }, Gold = { }, Diamond = { }, Chrome = { },
			Ethyrald = { }, Uran = { }, Coal = { }, Magnesium = { }, Wood = {};

public:
	Player(int iron, int copper,int wood, int gold);
	virtual ~Player();
};

}
/* namespace DeadNature */

#endif /* SRC_GAMELOGIC_PLAYERS_PLAYER_H_ */
