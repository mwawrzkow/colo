/*
 * Screen.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: mwawrzkow
 */

#include "Screen.h"

namespace State {

Screen::Screen(std::string FileList,std::shared_ptr<Texture::Cache>TextureCache, bool* sendRequest)
:Controller::State(FileList,TextureCache,sendRequest) {
	// TODO Auto-generated constructor stub

}
void Screen::CreateUnits(){

}
void Screen::setUnits(){

}
Screen::~Screen() {
	// TODO Auto-generated destructor stub
}

}
/* namespace DisplayManager */
