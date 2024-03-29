/*
 * Terrain.h
 *
 *  Created on: 27 cze 2019
 *      Author: marcin
 */

#ifndef SRC_WINDOWSTATES_GAME_TERRAIN_H_
#define SRC_WINDOWSTATES_GAME_TERRAIN_H_
#include "../../Graphic/WindowStates/LoadSprite/ObjectInterface.h"

namespace GameWindow {

class Terrain :public Graphic::ObjectInterface{
public:
	Terrain(const Graphic::ObjectInterface&);

	void update();
	void setPosition(float,float);
	void ChangeColor(float);
	virtual ~Terrain();
};

} /* namespace GameWindow */

#endif /* SRC_WINDOWSTATES_GAME_TERRAIN_H_ */
