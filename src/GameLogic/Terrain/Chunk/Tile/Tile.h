/*
 * Tile.h
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_TILE_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_TILE_H_
#include "Vector.h"
#include <vector>

namespace TerrainUnits {

class Tile {
	Math::VectorPtr vector;
	float heightMap[10][10];
public:
	Tile();
	std::vector<float*> getMatrix();
	virtual ~Tile();
public:
	//Vector methods
	void createVector();
	void setVector(Math::VectorPtr);
	Math::VectorPtr getVector();
};

} /* namespace TerrainUnits */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_TILE_H_ */
