/*
 * Game.h
 *
 *  Created on: 27 cze 2019
 *      Author: marcin
 */

#ifndef SRC_WINDOWSTATES_GAME_H_
#define SRC_WINDOWSTATES_GAME_H_

#include <memory>
#include <string>

#include "../GameLogic/Controller.h"
#include "../Graphic/WindowStates/State.h"
#include "Game/Terrain.h"

namespace GameWindow {

class Game :public Controller::State  {
	bool done = false;
	Logic::Controller *World;
	std::map<std::pair<int,int>,GameWindow::Terrain*>map;
public:
	Game(std::string,std::shared_ptr<Texture::Cache>TextureCache, bool*);
	void runGame();
	void CreateUnits();
	void setUnits();
	void update();
	virtual ~Game();
};

} /* namespace GameWindow */

#endif /* SRC_WINDOWSTATES_GAME_H_ */
