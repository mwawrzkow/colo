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
}
void Tile::createVector(){
	if(vector == nullptr)
		vector = Math::VectorPtr(new Math::Vector);
}
Math::VectorPtr Tile::getVector(){
	return vector;
}
void Tile::setVector(Math::VectorPtr ptr){
	vector = ptr;
}
std::vector<float*> Tile::getMatrix(){
	std::vector<float*> e;
	for(int x = 0 ; x < 10 ; x++)
		for(int y = 0 ; y < 10 ;y++)
			e.push_back(&heightMap[x][y]);
	return e;

}
bool Tile::exist(){
	if (vector->getxDir() == std::numeric_limits<int>::max())
		return true;
	if (vector->getxPos() == std::numeric_limits<int>::max())
		return true;
	if (vector->getyDir() == std::numeric_limits<int>::max())
		return true;
	if (vector->getyPos() == std::numeric_limits<int>::max())
		return true;
	return false;
}

} /* namespace TerrainUnits */
