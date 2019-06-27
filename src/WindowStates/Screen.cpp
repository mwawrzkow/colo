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
			Start = new Tile::Button(*Render.getQueue().at(i));
			Start->setPosition(600 , 100 );
			Units.push_back(Start);
		}else if(Render.getQueue().at(i)->getSpriteOptions().getName() == availibeNames[1])
		{
			End = new Tile::Button(*Render.getQueue().at(i));
			End->setPosition(600,300);
			Units.push_back(End);
		}
	}

}
void Screen::update(){
	State::update();
	if(End->checkClick()){
		askState = GameState::State::Exit;
		*sendRequest = true;
	}else if(Start->checkClick())
	{
		askState =GameState::State::Game;
		*sendRequest = true;
	}
}
void Screen::setUnits(){

}
Screen::~Screen() {
	// TODO Auto-generated destructor stub
}

}
/* namespace DisplayManager */
