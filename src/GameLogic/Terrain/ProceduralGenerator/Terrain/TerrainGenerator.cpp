/*
 * TerrainGenerator.cpp
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#include "TerrainGenerator.h"
#include <iostream>
#include <stdlib.h>
namespace Generator {

void TerrainGenerator::setdata(std::vector<ChunkPtr> data) {
	this->data = data;
}
void TerrainGenerator::setChunk(ChunkPtr toGenerate) {
	this->ChunkToRender = toGenerate.get();
}
void TerrainGenerator::rawGenerate() {
	int x = 0, y = 0;

	float a = ((rand() % 1000) + 1) / 100.0f;
	float b = ((rand() % 1000) + 1) / 100.0f;
	float c = ((rand() % 1000) + 1) / 100.0f;

	TerrainUnits::Tile &tile = ChunkToRender->getTile(0, 0);
	Math::VectorPtr tileVector(new Math::Vector);

	tileVector->setPositionOfVector(rand() % 10, rand() % 10);
	tileVector->setDirectionOfVector(rand() % 10, rand() % 10);

	tile.setVector(tileVector);

	std::vector<float*> firstRender(tile.getMatrix());

	applyVector.set(tile.getVector(), firstRender);

	do {

		*firstRender.at(x + y) = (*hill)(x, y % 10, a, b, c);
		++x;
		if (x == 10) {
			x = 0;
			++y;
		}
		if (x + y == 100)
			break;
	} while (true);
	applyVector.applyVector(((rand() % 10) + 1) / 4.f);
	Generate();
}
void TerrainGenerator::Generate() {
	TerrainUnits::Tile array[10][10] = { };
	for (int x = 0; x < 10; ++x) {
		for (int y = 0; y < 10; ++y) {

		}
	}

}

} /* namespace Generator */
