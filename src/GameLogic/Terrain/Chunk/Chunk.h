/*
 * Chunk.h
 *
 *  Created on: May 16, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_CHUNK_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_CHUNK_H_
#include <memory>
#include "Tile/Tile.h"

namespace TerrainUnits {

class Chunk {
	Tile heightMap[10][10];
public:
	Chunk();
	virtual ~Chunk();
	Tile& getTile(int,int);
};

} /* namespace TerrainUnits */

typedef std::shared_ptr<TerrainUnits::Chunk> ChunkPtr;

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_CHUNK_H_ */
