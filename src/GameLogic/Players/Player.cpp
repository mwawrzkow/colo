/*
 * Player.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Player.h"

namespace Players {

Player::Player(int iron, int copper, int wood, int gold){
	/*
	 * i = iron
	 * c = copper
	 * g = gold
	 * d diamond
	 * c chrome
	 * e etyrald
	 * u uran
	 * C coal
	 * m magnesium
	 * w wood
	 * p citizens
	 */
	magazine.insert(std::pair<char,float>('i',iron));
	magazine.insert(std::pair<char,float>('c',copper));
	magazine.insert(std::pair<char,float>('g',gold));
	magazine.insert(std::pair<char,float>('d',0));
	magazine.insert(std::pair<char,float>('c',0));
	magazine.insert(std::pair<char,float>('e',0));
	magazine.insert(std::pair<char,float>('u',0));
	magazine.insert(std::pair<char,float>('C',0));
	magazine.insert(std::pair<char,float>('m',0));
	magazine.insert(std::pair<char,float>('w',wood));
	magazine.insert(std::pair<char,float>('p',100));
}

void Player::playerTick() {


}
void Player::setBuild(std::shared_ptr<std::vector<DeadNature::Ore>> ores,std::shared_ptr<World::Map> map){
	builds.set(ores,map);
}

void Player::putBuilding(int x,int y,Units::Buildings::BuildingType ore){
	bool canAfford = true;
	for(std::pair<char,int> e:builds.price(ore,x,y))
	{
		if(magazine.find(e.first)->second>= e.second)
		{
			// empty intentionally
		}
		else
			canAfford = false;
	}
	for(std::pair<char,int> e:builds.price(ore,x,y))
		{
			magazine.find(e.first)->second-= e.second;
		}
	StaticUnits.push_back(builds.CreateBuilding(ore,x,y));

}
Player::~Player() {
	// TODO Auto-generated destructor stub
}

} /* namespace DeadNature */
