/*
 * Graphic.h
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_CONTROLLERS_GRAPHIC_H_
#define SRC_CONTROLLERS_GRAPHIC_H_
#include "../GameLogic/Controller.h"
#include "../Graphic/WindowPrototypes/MSSFMLView.h"



#include "../WindowStates/Screen.h"
#include "Events.h"
namespace Window {

class GameController :public Graphic::SFML_Controler{
public:
	GameController(Graphic::Render &window, IO::FileManager &settings,
			std::string gamedir);
	virtual ~GameController();
protected:
	virtual void createGameStates();
	void stateOfView();
};

} /* namespace Player */

#endif /* SRC_CONTROLLERS_GRAPHIC_H_ */
