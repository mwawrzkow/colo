#include <iostream>
#include "src/GameLogic/Terrain/Map.h"
using namespace std;

int main(int argc, char **argv) {
	TerrainUnits::Tile T;
	Math::VectorPtr vector(new Math::Vector);
	T.setVector(vector);
	vector->setDirectionOfVector(0, 4);
	vector->setPositionOfVector(0, 0);
	Script::vectorMatrix vM(T.getVector(), T.getMatrix());
	vM.applyVector(1);
	std::vector<float> test = vM.getWeightVector();
	int index = 0;
	for (auto it = test.begin(); it < test.end(); ++it) {
		std::cout << *it << "   ";
		if (!((index + 1) % 10)) {
			std::cout << std::endl;
			index = 0;
		}
		index++;
	}
	return 0;
}
