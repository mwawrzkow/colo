/*
 * Events.h
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_CONTROLLERS_EVENTS_H_
#define SRC_CONTROLLERS_EVENTS_H_
#include "../Graphic/WindowPrototypes/EventHandler.h"
namespace EventManager {

class Events :public SFML_Handlers::EventHandler{
public:
	Events();
	virtual ~Events();
};

} /* namespace EventManager */

#endif /* SRC_CONTROLLERS_EVENTS_H_ */
