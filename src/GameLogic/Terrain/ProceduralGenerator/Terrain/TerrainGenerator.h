/*
 * TerrainGenerator.h
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_TERRAINGENERATOR_H_
#define SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_TERRAINGENERATOR_H_
#include <memory>
#include "Scripts/Gauss.h"
#include "../../Chunk/Chunk.h"
namespace Generator {

class TerrainGenerator {
	Script::Gauss *gauss;
	std::vector<ChunkPtr> data;
    TerrainUnits::Chunk *ChunkToRender;
    void test();
public:
	void setdata(std::vector<ChunkPtr>);
	void setChunk(ChunkPtr);
	void generate();
};

} /* namespace Generator */

#endif /* SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_TERRAINGENERATOR_H_ */
