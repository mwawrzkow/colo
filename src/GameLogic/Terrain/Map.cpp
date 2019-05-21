#include "Map.h"
#include <memory>
#include <iostream>
namespace Map {
Map::Map() {
	//
}
Map::Map(ChunkPtr test){
	std::cerr << "Started Testing Constructor, do not use in final build";
	gen.setChunk(test);
}
Map::~Map(){

}

}
