#include "Map.h"
#include <memory>
#include <iostream>
namespace Map {
typedef std::pair<int, std::map<int, ChunkPtr>> ChunkColumn;
typedef std::pair<int, ChunkPtr> ChunkLoc;
Map::Map() {
	for (int x = 0; x < 10; ++x) {
		std::map<int, ChunkPtr> tmp;
		map.insert(ChunkColumn(x, tmp));
		for (int y = 0; y < 10; ++y) {
			map.find(x)->second.insert(
					ChunkLoc(y, ChunkPtr(new TerrainUnits::Chunk)));
		}
	}
	ChunkPtr tmp(map.find(0)->second.find(0)->second);
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
