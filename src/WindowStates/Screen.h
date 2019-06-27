/*
 * Screen.h
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_WINDOWSTATES_SCREEN_H_
#define SRC_WINDOWSTATES_SCREEN_H_
#include "Screen/Buttons.h"
#include "../Graphic/WindowStates/State.h"
namespace State{

class Screen :public Controller::State {
	Tile::Button* Start;
	Tile::Button* End;
public:
	Screen(std::string,std::shared_ptr<Texture::Cache>TextureCache, bool*);
	void CreateUnits();
	void setUnits();
	virtual ~Screen();
	void update();
};

} /* namespace DisplayManager */

#endif /* SRC_WINDOWSTATES_SCREEN_H_ */
