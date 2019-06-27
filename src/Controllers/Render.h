/*
 * Render.h
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_CONTROLLERS_RENDER_H_
#define SRC_CONTROLLERS_RENDER_H_
#include "../Graphic/WindowPrototypes/Render.h"
namespace DisplayManager {

class Render :public Graphic::Render{
public:
	Render(sf::RenderWindow&);
	void sendView();
	virtual ~Render();
};

} /* namespace DisplayManager */

#endif /* SRC_CONTROLLERS_RENDER_H_ */
