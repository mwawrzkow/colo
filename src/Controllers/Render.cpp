/*
 * Render.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#include "Render.h"

namespace DisplayManager {

Render::Render(sf::RenderWindow& window):Graphic::Render(window){

	view.setCenter(sf::Vector2f(640,360));
	view.setSize(sf::Vector2f(1280.f, 720.f));
	window.setView(view);

	// TODO Auto-generated constructor stub

}
void Render::sendView(){
	event->setView(view);
}
Render::~Render() {
	// TODO Auto-generated destructor stub
}

} /* namespace DisplayManager */
