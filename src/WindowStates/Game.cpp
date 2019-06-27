/*
 * Game.cpp
 *
 *  Created on: 27 cze 2019
 *      Author: marcin
 */

#include "Game.h"

namespace GameWindow {

Game::Game(std::string FileList,std::shared_ptr<Texture::Cache>TextureCache, bool* sendRequest)
:Controller::State(FileList,TextureCache,sendRequest),World(1000,1000,-0.4,0.6){

/*
 * const int Width, const int Height, float Waterlevel,
		const float HillLevel)
 */
}
void Game::CreateUnits(){

}
void Game::setUnits(){

}
Game::~Game(){

}
} /* namespace GameWindow */
