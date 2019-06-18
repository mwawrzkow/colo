/*
 * Map.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_MAP_H_
#define SRC_GAMELOGIC_MAP_H_

#include "../../../FastNoise.h"
#include <map>
#include <cstdlib>

namespace World {
enum Weather{
	Rainy,
	Sunny,
	Cloudy,
	foggy

};

class Map {
	const int x;
	const int y;
	std::map<std::pair<int,int>,float>heightMap;
	FastNoise noise;
	float waterLevel = 0.05;
	const float hillLevel = 0.5;
public:
	Map(const int,const int,float,const float);

	virtual ~Map();
	void worldTick();
	const int getWidth()const;
	const int getHeight()const;
	const float getPointValue(int,int) const;
protected:
	Weather stateOfTheAtmosfere;
	float degree;
};

} /* namespace World */

#endif /* SRC_GAMELOGIC_MAP_H_ */
