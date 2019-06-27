/*
 * Graphic.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#include "Graphic.h"
#include "../WindowStates/Game.h"
namespace Window {

GameController::GameController(Graphic::Render &window, IO::FileManager &settings,
		std::string gamedir):Graphic::SFML_Controler(window,settings,gamedir) {
	Event = new EventManager::Events();
	Event->setWindow(window.getWindow());
	createGameStates();
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
	states.push_back(screen);
	window.renderQueue(*states.at(WindowState));
	Event->setObjects(*states.at(WindowState));
	GameWindow::Game* game = new GameWindow::Game(
			gamedir
					+ settings.LoadFileInformation(
							IO::Information::MENU_FILE_LIST).value,
			TextureCache, &isAskingForChange);
}
void GameController::stateOfView(){
	if(WindowState == GameState::State::Exit)
	{
		window.getWindow().close();
	}
}
} /* namespace Player */
