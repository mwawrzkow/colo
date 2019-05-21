/*
 * Tile.cpp
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#include "Tile.h"

namespace TerrainUnits {

Tile::Tile() {
    createVector();
	// TODO Auto-generated constructor stub

}

Tile::~Tile() {
	// TODO Auto-generated destructor stub
    delete vector;
}
void Tile::createVector(){
vector = new Math::Vector;
}
void Tile::deleteVector(){
delete vector;
}
Math::Vector* Tile::getVector(){
	return vector;
}
std::vector<float*> Tile::getMatrix(){
	std::vector<float*> e;
	return e;

}

} /* namespace TerrainUnits */
