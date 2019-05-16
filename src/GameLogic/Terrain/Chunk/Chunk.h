/*
 * Chunk.h
 *
 *  Created on: May 16, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_CHUNK_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_CHUNK_H_

namespace TerrainUnits {

class Chunk {
	int heightMap[100][100];
	int heatMap[100][100];
public:
	Chunk();
	virtual ~Chunk();
};

} /* namespace TerrainUnits */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_CHUNK_H_ */
