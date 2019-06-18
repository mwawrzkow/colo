/*
 * Ore.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_DEADNATURE_ORE_H_
#define SRC_GAMELOGIC_DEADNATURE_ORE_H_
#include <map>
namespace DeadNature {
enum oreType{
	Iron,
	Copper,
	Gold,
	Diamond,
	Chrome,
	Ethyrald,
	Uran,
	Coal,
	Magnesium
};

class Ore {
	oreType type;
	std::map<std::pair<int,int>,float>amountOf; // @suppress("Symbol is resolved")
	void createMap(float,float, const int,  const int);
public:
	Ore(oreType,const int width,const int height);
	const std::map<std::pair<int,int>,float>getMap()const;
	const oreType getOreType()const;
	virtual ~Ore();
};

} /* namespace DeadNature */

#endif /* SRC_GAMELOGIC_DEADNATURE_ORE_H_ */
