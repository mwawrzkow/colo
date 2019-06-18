/*
 * GameLogic.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "GameLogic.h"
#include <iostream>
namespace GameLogic {

GameLogic::GameLogic(const int Width, const int Height, float Waterlevel,
		const float HillLevel):
World(Width,Height,Waterlevel,HillLevel) {
	std::cerr << "Done map" << std::endl;
	Ores.push_back({DeadNature::oreType::Chrome,Width,Height});
	std::cerr << "Done Chrome" << std::endl;
	Ores.push_back({DeadNature::oreType::Coal,Width,Height});
	std::cerr << "Done Coal" << std::endl;
	Ores.push_back({DeadNature::oreType::Copper,Width,Height});
	std::cerr << "Done Copper" << std::endl;
	Ores.push_back({DeadNature::oreType::Diamond,Width,Height});
	std::cerr << "Done Diamond" << std::endl;
	Ores.push_back({DeadNature::oreType::Ethyrald,Width,Height});
	std::cerr << "Done Ethyrald" << std::endl;
	Ores.push_back({DeadNature::oreType::Gold,Width,Height});
	std::cerr << "Done Gold" << std::endl;
	Ores.push_back({DeadNature::oreType::Iron,Width,Height});
	std::cerr << "Done Iron" << std::endl;
	Ores.push_back({DeadNature::oreType::Magnesium,Width,Height});
	std::cerr << "Done magnesium" << std::endl;
	Ores.push_back({DeadNature::oreType::Uran,Width,Height});
	std::cerr << "Done Uran" << std::endl;


}

GameLogic::~GameLogic() {
	// TODO Auto-generated destructor stub
}

} /* namespace GameLogic */
