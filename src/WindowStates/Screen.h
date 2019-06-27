/*
 * Screen.h
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_WINDOWSTATES_SCREEN_H_
#define SRC_WINDOWSTATES_SCREEN_H_
#include "../Graphic/WindowStates/State.h"
namespace State{

class Screen :public Controller::State {
public:
	Screen(std::string,std::shared_ptr<Texture::Cache>TextureCache, bool*);
	void CreateUnits();
	void setUnits();
	virtual ~Screen();
};

} /* namespace DisplayManager */

#endif /* SRC_WINDOWSTATES_SCREEN_H_ */
