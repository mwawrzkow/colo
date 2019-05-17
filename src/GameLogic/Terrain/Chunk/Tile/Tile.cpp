/*
 * Tile.cpp
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#include "Tile.h"

namespace TerrainUnits {

Tile::Tile() {
	// TODO Auto-generated constructor stub

}

Tile::~Tile() {
	// TODO Auto-generated destructor stub
}
std::vector<float&> Tile::getMatrix(){
	std::vector<float&> e;
	for(int x = 0; x < 10; x++)
		for(int y = 0; y < 10; y++)
			e.push_back(*points[x][y]);

}

} /* namespace TerrainUnits */
