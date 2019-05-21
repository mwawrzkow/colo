/*
 * TerrainGenerator.cpp
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#include "TerrainGenerator.h"
#include <iostream>
namespace Generator {

void TerrainGenerator::setdata(std::vector<ChunkPtr> data) {
	this->data = data;
}
void TerrainGenerator::setChunk(ChunkPtr toGenerate) {
	this->ChunkToRender = toGenerate.get();
	generate();
}
void TerrainGenerator::generate() {
	std::cout << "Generating Map";
	gauss = new Script::Gauss(ChunkToRender->getTile(0, 0));
	std::vector<float *> vector = ChunkToRender->getTile(0, 0).getMatrix();
	for (int i = 0; i < 100; i++) {
		std::cout << vector.at(i) << " ";
		if(i % 10)
			std::cout << std::endl;
	}
}

} /* namespace Generator */
