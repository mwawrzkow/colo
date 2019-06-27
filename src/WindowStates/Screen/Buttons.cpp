/*
 * Buttons.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#include "Buttons.h"

namespace Tile {

Button::Button(const Graphic::ObjectInterface& interface):Graphic::ObjectInterface(interface) {
	// TODO Auto-generated constructor stub
	createSprite();
}
void Button::update(){
	spriteUpdate();

}
void Button::setPosition(float x ,float y){
	Sprite.setPosition(sf::Vector2f(x,y));

}
Button::~Button() {
	// TODO Auto-generated destructor stub
}

} /* namespace DisplayManager */
