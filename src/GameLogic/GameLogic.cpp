/*
 * GameLogic.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "GameLogic.h"
#include <iostream>
namespace Game{
typedef std::pair<int,int> Position;
typedef std::pair<Position,DeadNature::Tree> TreePosition;
GameLogic::GameLogic(const int Width, const int Height, float Waterlevel,
		const float HillLevel):
World(new World::Map(Width,Height,Waterlevel,HillLevel)),Ores(new std::vector<DeadNature::Ore>),Trees(new std::map<std::pair<int,int>,DeadNature::Tree>) {
	std::cerr << "Done map" << std::endl;
	Ores->push_back({DeadNature::oreType::Chrome,Width,Height});
	std::cerr << "Done Chrome" << std::endl;
	Ores->push_back({DeadNature::oreType::Coal,Width,Height});
	std::cerr << "Done Coal" << std::endl;
	Ores->push_back({DeadNature::oreType::Copper,Width,Height});
	std::cerr << "Done Copper" << std::endl;
	Ores->push_back({DeadNature::oreType::Diamond,Width,Height});
	std::cerr << "Done Diamond" << std::endl;
	Ores->push_back({DeadNature::oreType::Ethyrald,Width,Height});
	std::cerr << "Done Ethyrald" << std::endl;
	Ores->push_back({DeadNature::oreType::Gold,Width,Height});
	std::cerr << "Done Gold" << std::endl;
	Ores->push_back({DeadNature::oreType::Iron,Width,Height});
	std::cerr << "Done Iron" << std::endl;
	Ores->push_back({DeadNature::oreType::Magnesium,Width,Height});
	std::cerr << "Done magnesium" << std::endl;
	Ores->push_back({DeadNature::oreType::Uran,Width,Height});
	std::cerr << "Done Uran" << std::endl;
	for(int x = 0; x < Width; ++x)
		for(int y = 0; y < Height; ++y)
			if(World->getPointValue(x,y) < 0.5 && World->getPointValue(x,y) > 0.3)
				if((rand()%10) > 7)
					Trees->insert(TreePosition(Position(x,y),DeadNature::Tree()));

	std::cerr << "Done Trees" << std::endl;


}
void GameLogic::AddPlayer(std::shared_ptr<Players::Player> player){
	player->setBuild(Ores,World);
	players.push_back(player);
}


GameLogic::~GameLogic() {
	// TODO Auto-generated destructor stub
}

} /* namespace GameLogic */
