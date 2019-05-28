#include <iostream>
#include "src/GameLogic/Terrain/Map.h"
#include <iomanip>
using namespace std;

int main(int argc, char **argv) {
	std::cout<< ":)" << std::endl;
	TerrainUnits::Tile T;
	Math::VectorPtr vector(new Math::Vector);
	T.setVector(vector);
	vector->setDirectionOfVector(3, 3);
	vector->setPositionOfVector(0, 0);
	Script::vectorMatrix vM(T.getVector(), T.getMatrix());
	vM.applyVector(2);
	std::vector<float> test = vM.getWeightVector();
	std::cout << std::setw(15);
	for (int i = 0;i < test.size(); ++i) {
		std::cout << test[i] << "  " <<std::setw(15);
		if (!((i +1) % 10)) {
			std::cout <<std::endl;
		}
	}
	return 0;
}
