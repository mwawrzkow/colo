/*
 * Player.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Player.h"

namespace Player {

Player::Player(int iron, int copper, int wood, int gold) :
		Iron(iron), Copper(copper), Wood(wood), Gold(gold) {
	// TODO Auto-generated constructor stub

}
void Player::playerTick() {
	citizens = 0;
	for (Buildings::Home &e : Homes) {
		citizens += e.getCitizens();
	}
	for (Buildings::Mine &e : Mines) {
		switch (e.getMiningOreType()) {
		case DeadNature::oreType::Chrome:
			Chrome += e.gerResources();
			break;
		case DeadNature::oreType::Coal:
			Coal += e.gerResources();
			break;
		case DeadNature::oreType::Copper:
			Copper += e.gerResources();
			break;
		case DeadNature::oreType::Diamond:
			Diamond += e.gerResources();
			break;
		case DeadNature::oreType::Ethyrald:
			Ethyrald+= e.gerResources();
			break;
		case DeadNature::oreType::Gold:
			Gold+= e.gerResources();
			break;
		case DeadNature::oreType::Iron:
			Iron+= e.gerResources();
			break;
		case DeadNature::oreType::Magnesium:
			Magnesium+= e.gerResources();
			break;
		case DeadNature::oreType::Uran:
			Uran+=e.gerResources();
			break;
		}
	}

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

} /* namespace DeadNature */
