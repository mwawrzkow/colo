/*
 * Screen.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#include "Screen.h"

namespace State {

Screen::Screen(std::string FileList,std::shared_ptr<Texture::Cache>TextureCache, bool* sendRequest)
:Controller::State(FileList,TextureCache,sendRequest) {
	StateAdd("Start");
	StateAdd("Exit");
	// TODO Auto-generated constructor stub
	State::start();

}
void Screen::CreateUnits(){
	for (int i = 0; i < Render.getQueue().size(); i++) {
		if(Render.getQueue().at(i)->getSpriteOptions().getName() == availibeNames[0])
		{
			button = new Tile::Button(*Render.getQueue().at(i));
			button->setPosition(100 , 100 );
			Units.push_back(button);
		}
	}

}
void Screen::setUnits(){

}
Screen::~Screen() {
	// TODO Auto-generated destructor stub
}

}
/* namespace DisplayManager */
