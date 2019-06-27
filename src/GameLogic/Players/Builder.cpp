/*
 * Build.cpp
 *
 *  Created on: Jun 24, 2019
 *      Author: mwawrzkow
 */

#include "Builder.h"
#include "../Map/Map.h"
namespace Build {

void Builder::set(std::shared_ptr<std::vector<DeadNature::Ore>> ores,std::shared_ptr<World::Map>map)
{
Ores = ores;
Map = map;
}
Units::Buildings::Building Builder::CreateBuilding(Units::Buildings::BuildingType ore,int x ,int y)
{
	/*
	 * Building(std::pair<int, int> position, std::pair<int, int> surface,
	 BuildingType type, int income, int maitance,int health)
	 */
	int height = 10 , width = 10;
	int endx = x , endy = y,tmpvalue = Map->getPointValue(x,y);
	endx+= width;
	endy+= height;
	for(int startx = x; startx <=endx; ++startx)
		for(int starty = y; starty <= endy; ++starty)
		{
			*Map->getEditablePointValue(startx,starty) = tmpvalue;
		}

	int income = {};
	for(DeadNature::Ore &e:*Ores)
	{
		if(e.getOreType() == static_cast<DeadNature::oreType>(ore))
		{
			std::map<std::pair<int,int>,float>map(e.getMap());
			for(int startx = x; startx <= endx;++startx)
				for(int starty=y;starty <= endy;++starty)
				{
					income += map.find(std::pair<int,int>(startx,starty))->second;
				}
		}
	}
	income*=100;
	/*
	 * Building::Building(std::pair<int, int> position, std::pair<int, int> surface,
		BuildingType type, int income, int maitance,int health)
	 */
	return Units::Buildings::Building(std::pair<int,int>(x,y),std::pair<int,int>(width,height),ore,income,10,300);
}
std::vector<std::pair<char,int>> Builder::price(Units::Buildings::BuildingType ore,int x ,int y){
	int height = 10, width = 10;
	int endx = x + width, endy = y+height, price ={},tmpvalue = Map->getPointValue(x,y);
	for(int tmpx = x ; tmpx <= endx; ++tmpx)
		for(int tmpy = y; tmpy <= endy;++tmpy)
		{
			float value = Map->getPointValue(tmpx,tmpy);

			price += abs((value-tmpvalue)*10);
			tmpvalue = value;
		}
	std::vector<std::pair<char,int>> value;
	value.push_back(std::pair<char,int>('g',price));
	value.push_back(std::pair<char,int>('c',10));
	return value;
}

Builder::~Builder() {
	// TODO Auto-generated destructor stub
}

} /* namespace Player */
