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
	Event = new EventManager::Events();
	createGameStates();
	Event->setWindow(window.getWindow());
	start();
}

GameController::~GameController() {
	// TODO Auto-generated destructor stub
}
void GameController::createGameStates(){
	State::Screen* screen = new State::Screen(
			gamedir
					+ settings.LoadFileInformation(
							IO::Information::MENU_FILE_LIST).value,
			TextureCache, &isAskingForChange);
}

} /* namespace Player */
