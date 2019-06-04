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
#include <map>
namespace Map{
    
class Map{
	Generator::TerrainGenerator gen;
	std::map<std::pair<int,int>,ChunkPtr> map;
public:
	Map(ChunkPtr);
public:
	 Map();

	 ~Map();
protected:
};
    
    
    
    
    
    
}
#endif
