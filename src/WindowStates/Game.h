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

namespace GameWindow {

class Game :public Controller::State  {
	Logic::Controller World;
public:
	Game(std::string,std::shared_ptr<Texture::Cache>TextureCache, bool*);
	void CreateUnits();
	void setUnits();
	virtual ~Game();
};

} /* namespace GameWindow */

#endif /* SRC_WINDOWSTATES_GAME_H_ */
