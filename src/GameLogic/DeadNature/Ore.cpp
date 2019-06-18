/*
 * Ore.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Ore.h"
#include "../../../FastNoise.h"
namespace DeadNature {

Ore::Ore(oreType type,const int width,const int height):type(type){
	switch(type)
	{
	case oreType::Chrome:
		createMap(-1,-0.03,width,height);
		break;
	case oreType::Coal:
		createMap(-0.5,0.5,width,height);
		break;
	case oreType::Copper:
		createMap(0.5,0.7,width,height);
		break;
	case oreType::Diamond:
		createMap(-0.9,-1,width,height);
		break;
	case oreType::Ethyrald:
		createMap(-0.5,0.5,width,height);
		break;
	case oreType::Gold:
		createMap(0.8,1,width,height);
		break;
	case oreType::Iron:
		createMap(-0.2,0.4,width,height);
		break;
	case oreType::Uran:
		createMap(0.9,1,width,height);
		break;
	case oreType::Magnesium:
		createMap(0.6,0.7,width,height);
		break;
	}

}
const oreType Ore::getOreType()const
{
	return type;
}
typedef std::pair<int,int> Position;
typedef std::pair<Position,float>OrePos;

void Ore::createMap(float start, float end,const int width, const int height)
{
	FastNoise noise;
	noise.SetNoiseType(FastNoise::NoiseType::Simplex);
	noise.SetFractalOctaves(6);
	for(int x = 0; x < width; ++x)
		for(int y = 0; y < height; ++y)
		{
			float value = noise.GetSimplex(x,y);
			if(value > start && value < end)
				amountOf.insert(OrePos(Position(x,y),value));
		}


}
const std::map<std::pair<int,int>,float>Ore::getMap()const{
	return amountOf;
}

Ore::~Ore() {
	// TODO Auto-generated destructor stub
}

} /* namespace DeadNature */
