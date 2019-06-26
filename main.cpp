#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include "src/Controllers/Graphic.h"
#include "src/Controllers/Render.h"
#include "src/FileIOController.h"

int main(int argc, char **argv)
{
	std::string ConfigurationFilePath = argv[0];
	FileIO::getexepath(argv[0], ConfigurationFilePath);
	IO::FileManager settings(ConfigurationFilePath + "config.conf");
	LFI(settings);
	sf::RenderWindow toController(
				sf::VideoMode(settings.value_INT(IO::Information::WIDTH),
						settings.value_INT(IO::Information::HEIGHT)), "Colonization");
	DisplayManager::Render render(toController);
	Window::GameController Window(render, settings, ConfigurationFilePath);
	std::cerr << "Here Magic Begins" << std::endl;
	srand(time(NULL));
	Game::GameLogic logic(1000,1000,0.02f,0.5);
	std::cerr << "Done";

	return 0;
}
