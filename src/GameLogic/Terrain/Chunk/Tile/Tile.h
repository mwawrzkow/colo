/*
 * Tile.h
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_TILE_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_TILE_H_
#include <vector>

namespace TerrainUnits {

class Tile {
	float points[10][10];
public:
	Tile();
	std::vector<float&> getMatrix();
	virtual ~Tile();
};

} /* namespace TerrainUnits */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_TILE_H_ */
