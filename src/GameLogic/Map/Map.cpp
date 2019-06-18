/*
 * Map.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Map.h"

namespace World {

typedef std::pair<int, int> Position;
typedef std::pair<Position, float> Point;

Map::Map(const int x, const int y, float waterLevel, const float hillLever) :
		x(x), y(y), waterLevel(waterLevel), hillLevel(hillLevel), stateOfTheAtmosfere(
				Weather::Sunny), degree(25.0) {
	// TODO Auto-generated constructor stub

	noise.SetSeed(rand());
	noise.SetInterp(FastNoise::Interp::Quintic);
	noise.SetNoiseType(FastNoise::NoiseType::Perlin);
	for (int tmpx = 0; tmpx < x; ++tmpx)
		for (int tmpy = 0; tmpy < y; ++tmpy) {
			float value = noise.GetPerlin(tmpx + 1, tmpy + 1);
			heightMap.insert(Point(Position(tmpx, tmpy), value));
		}

}

const int Map::getWidth() const {
	return x;
}
const int Map::getHeight() const {
	return y;
}
const float Map::getPointValue(int x, int y) const {
	return heightMap.find(Position(x, y))->second;

}

Map::~Map() {
	// TODO Auto-generated destructor stub
}

} /* namespace World */
