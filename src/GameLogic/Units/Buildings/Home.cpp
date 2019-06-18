/*
 * Home.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Home.h"

namespace Buildings {

Home::Home(homeSize size,int x, int y) :
		size(size),Building(180,x,y) {
	switch (size) {
	case homeSize::small:
		width = 2;
		height = 2;
		citizens = 10;
		break;
	case homeSize::big:
		width = 5;
		height = 5;
		citizens = 30;
		break;
	case homeSize::huge:
		width = 10;
		height = 10;
		citizens = 60;
		break;
	}

}
const int Home::getCitizens()const{
	return citizens;
}
Home::~Home() {
	// TODO Auto-generated destructor stub
}

} /* namespace DeadNature */
