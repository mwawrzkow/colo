/*
 * Events.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#include "Events.h"

namespace EventManager {

Events::Events() {
	// TODO Auto-generated constructor stub

}
void Events::EventChecker(){
	while (window->pollEvent(WindowEvent)) {
		// "close requested" event: we close the window
		if (WindowEvent.type == sf::Event::Closed)
			window->close();
		if (WindowEvent.type == sf::Event::MouseButtonPressed)
			mousePress();
		if(WindowEvent.type == sf::Event::KeyPressed){
			keypressed();
		}
	}
}
void Events::keypressed(){
	switch(WindowEvent.key.code)
	{
	case sf::Keyboard::W:
		view->setCenter(0,300);
		break;
	case sf::Keyboard::S:
			view->setCenter(0,-300);
			break;
	case sf::Keyboard::D:
			view->setCenter(300,0);
			break;
	case sf::Keyboard::A:
			view->setCenter(0,-300);
			break;
	}
}

void Events::setView(sf::View& v){
	view = &v;
}
Events::~Events() {
	// TODO Auto-generated destructor stub
}

} /* namespace EventManager */
