#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include "src/GameLogic/Map.h"

int main()
{
	std::cerr << "Here Magic Begins" << std::endl;
	srand(time(NULL));
	World::Map map(1000,15);
	int width = map.getWidth(), height = map.getHeight();
	for(int x = 0; x < width; ++x){
		for(int y = 0; y < height; ++y)
		{
			std::cerr <<std::setw(15)<<map.getPointValue(x,y) ;
		}
		std::cerr << std::endl;
	}


	return 0;
}
