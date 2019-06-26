/*
 * Graphic.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#include "Graphic.h"

namespace Window {

GameController::GameController(Graphic::Render &window, IO::FileManager &settings,
		std::string gamedir):Graphic::SFML_Controler(window,settings,gamedir) {
	// TODO Auto-generated constructor stub

}

GameController::~GameController() {
	// TODO Auto-generated destructor stub
}
void GameController::createGameStates(){

}

} /* namespace Player */
