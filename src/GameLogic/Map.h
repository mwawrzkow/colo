/*
 * Map.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_MAP_H_
#define SRC_GAMELOGIC_MAP_H_

#include "../../FastNoise.h"
#include <map>
#include <cstdlib>

namespace World {

class Map {
	const int x;
	const int y;
	std::map<std::pair<int,int>,float>heightMap;
	FastNoise noise;
public:
	Map(const int,const int);

	virtual ~Map();

	const int getWidth()const;
	const int getHeight()const;
	const float getPointValue(int,int) const;
};

} /* namespace World */

#endif /* SRC_GAMELOGIC_MAP_H_ */
