/*
 * Chunk.cpp
 *
 *  Created on: May 16, 2019
 *      Author: mwawrzkow
 */

#include "Chunk.h"

namespace TerrainUnits {

Chunk::Chunk() {
	// TODO Auto-generated constructor stub

}
Tile& Chunk::getTile(int x, int y){
	return heightMap[x][y];
}

Chunk::~Chunk() {
	// TODO Auto-generated destructor stub
}

} /* namespace TerrainUnits */
