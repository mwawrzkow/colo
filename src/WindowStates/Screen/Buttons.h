/*
 * Buttons.h
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_WINDOWSTATES_SCREEN_BUTTONS_H_
#define SRC_WINDOWSTATES_SCREEN_BUTTONS_H_
#include "../../Graphic/WindowStates/LoadSprite/ObjectInterface.h"
namespace Tile {

class Button : public Graphic::ObjectInterface{
public:
	Button(const Graphic::ObjectInterface&);
	void update();
	void setPosition(float,float);
	virtual ~Button();
};

} /* namespace DisplayManager */

#endif /* SRC_WINDOWSTATES_SCREEN_BUTTONS_H_ */
