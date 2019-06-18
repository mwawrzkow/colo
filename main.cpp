#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include "src/GameLogic/GameLogic.h"

int main()
{
	std::cerr << "Here Magic Begins" << std::endl;
	srand(time(NULL));
	GameLogic::GameLogic logic(1000,1000,0.02f,0.5);
	std::cerr << "Done";

	return 0;
}
