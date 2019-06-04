#include "Map.h"
#include <memory>
#include <iostream>
namespace Map {
typedef std::pair<int,int> Position;
Map::Map() {
	for (int x = 0; x < 10; ++x) {
		for (int y = 0; y < 10; ++y) {
			//map.insert(Position(x,y),ChunkPtr(new TerrainUnits::Chunk));
			map.insert({x,y},ChunkPtr(new TerrainUnits::Chunk));
		}
	}
	ChunkPtr tmp(map.find(Position(0,0))->second);
	gen.setChunk(tmp);
	gen.rawGenerate();

	tmp = nullptr;


}

Map::Map(ChunkPtr test) {
	std::cerr << "Started Testing Constructor, do not use in final build";
	gen.setChunk(test);
}

Map::~Map() {

}

}
