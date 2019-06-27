/*
 * Game.cpp
 *
 *  Created on: 27 cze 2019
 *      Author: marcin
 */

#include "Game.h"

namespace GameWindow {

Game::Game(std::string FileList,std::shared_ptr<Texture::Cache>TextureCache, bool* sendRequest) // @suppress("Class members should be properly initialized")
:Controller::State("",TextureCache,sendRequest){
	sf::Texture texture;
	texture.create(10,10);
	Objects::Object* tmp = new Objects::Object;
	/*
	 * sf::Texture *ref, const char* name, int width, int height,
		int startingPos, int frames, int refreshRate
	 */
	tmp->set(&texture,"Terrain",1,1,0,1,1);

	for(int x = 0; x <= 1280;++x)
		for(int y = 0;y<=720;++y)
		{
			GameWindow::Terrain* a;
			a = new GameWindow::Terrain(*tmp);
			std::pair<int,int>Pos(x,y);
			map.insert(std::pair<std::pair<int,int>,GameWindow::Terrain*>(Pos,a));
			Units.push_back(a);
			a->setPosition(1*x,1*y);
		}
}
void Game::update(){
	Controller::State::update();
	for(int x = 0; x < 1280;++x)
		for(int y = 0; y < 720; ++y)
		{
			float value = World->getMap()->getPointValue(x,y);
			value += 0.3;
			map.find(std::pair<int,int>(x,y))->second->ChangeColor(value*225);
		}
}
void Game::runGame()
{
	World = new Logic::Controller(1280,720,-0.3,0.6);
}
void Game::CreateUnits(){



}
void Game::setUnits(){

}
Game::~Game(){

}
} /* namespace GameWindow */
