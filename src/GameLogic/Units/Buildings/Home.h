/*
 * Home.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_UNITS_BUILDINGS_HOME_H_
#define SRC_GAMELOGIC_UNITS_BUILDINGS_HOME_H_
#include "Building.h"
namespace Buildings {

class Home : public Building{
	enum homeSize{
		small, big, huge
	};
	homeSize size;
	int width, height;
	int citizens;
public:
	Home(homeSize);
	virtual ~Home();
};

} /* namespace DeadNature */

#endif /* SRC_GAMELOGIC_UNITS_BUILDINGS_HOME_H_ */
