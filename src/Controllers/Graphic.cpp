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
	game = new GameWindow::Game(
			gamedir
					+ settings.LoadFileInformation(
							IO::Information::MENU_FILE_LIST).value,
			TextureCache, &isAskingForChange);
	states.push_back(game);
	window.renderQueue(*states.at(WindowState));
	Event->setObjects(*states.at(WindowState));
}
void GameController::stateOfView(){
	if(WindowState == GameState::State::Exit)
	{
		window.getWindow().close();
	}if(WindowState==GameState::State::Game)
	{
		window.renderQueue(*game);
		Event->setObjects(*game);
		game->runGame();
		window.sendView();

	}
}
} /* namespace Player */
