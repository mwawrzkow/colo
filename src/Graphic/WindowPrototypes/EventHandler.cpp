/*
 * EventHandler.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: mwawrzkow
 */

#include "EventHandler.h"
#include <iostream>
namespace SFML_Handlers {

EventHandler::EventHandler() :
		window(new sf::RenderWindow),Objects(){
	// TODO Auto-generated constructor stub

}

void EventHandler::setWindow(sf::RenderWindow &window) {
	this->window = &window;
}
void EventHandler::closeGame(){
	window->close();
}
void EventHandler::EventChecker() {
	while (window->pollEvent(WindowEvent)) {
		// "close requested" event: we close the window
		if (WindowEvent.type == sf::Event::Closed)
			window->close();
		if (WindowEvent.type == sf::Event::MouseButtonPressed)
			mousePress();
	}
}
void EventHandler::mousePress() {
	float x = WindowEvent.mouseButton.x;
	float y = WindowEvent.mouseButton.y;
	for (Graphic::ObjectInterface *tmp : *Objects->getUnits()) {
		float startx = tmp->returnSprite()->getPosition().x;
		float starty = tmp->returnSprite()->getPosition().y;
		float height = tmp->getSpriteOptions().getsHeight() + starty;
		float width = tmp->getSpriteOptions().getsWidth() + startx;
		if(x >= startx && x <= width)
			if(y>=starty&&y<=height)
			{
				tmp->click();
			}

}
}
void EventHandler::setObjects(Controller::State &tmp) {
Objects = &tmp;

}
EventHandler::~EventHandler() {
// TODO Auto-generated destructor stub
}
} /* namespace SFML_Handlers */
