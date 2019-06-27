/*
 * Terrain.cpp
 *
 *  Created on: 27 cze 2019
 *      Author: marcin
 */

#include "Terrain.h"

namespace GameWindow {

Terrain::Terrain(const Graphic::ObjectInterface& a):Graphic::ObjectInterface(a) {
	// TODO Auto-generated constructor stub

}

void Terrain::update(){

}
void Terrain::setPosition(float x,float y){
	Sprite.setPosition(sf::Vector2f(x,y));

}
void Terrain::ChangeColor(float x){
	if(x>0)
	{
		Sprite.setColor(sf::Color(x*0.3,x,0));
	}else{
		x = abs(x);
		x = 225 -x;
		Sprite.setColor(sf::Color(0,x/4,x));
	}

}
Terrain::~Terrain(){

}

} /* namespace GameWindow */
