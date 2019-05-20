// 
// 
// 
// 
// 
#ifndef SRC_GAMELOGIC_TERRAIN_MAP_H
#define SRC_GAMELOGIC_TERRAIN_MAP_H
#include <vector>
#include "Chunk/Chunk.h"
#include "ProceduralGenerator/Terrain/TerrainGenerator.h"
namespace Map{
    
class Map{
	Generator::TerrainGenerator gen;
	std::vector<ChunkPtr> data;

public:
	 Map();

	virtual ~Map();
};
    
    
    
    
    
    
}
#endif
