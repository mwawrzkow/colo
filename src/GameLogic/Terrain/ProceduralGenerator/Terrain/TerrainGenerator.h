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
#include "Scripts/Functions.h"
#include <map>
namespace Generator {

class TerrainGenerator {
	Script::vectorMatrix applyVector;
	Script::Gauss *gauss;
	std::vector<ChunkPtr> data;
    TerrainUnits::Chunk *ChunkToRender;
    float (*hill)(int,int,float,float,float) = terrainfunctions::hill;
    void test();
	void rawGenerate(TerrainUnits::Tile &tile);
public:
	void setdata(std::vector<ChunkPtr>);
	void setChunk(ChunkPtr);
    void rawGenerate();
	void inChunkGenerate();
};

} /* namespace Generator */

#endif /* SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_TERRAINGENERATOR_H_ */
