#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include "src/Controllers/Graphic.h"
#include "src/Controllers/Render.h"
#include "src/FileIOController.h"

int main(int argc, char **argv)
{
	srand(time(NULL));
	std::string ConfigurationFilePath = argv[0];
	FileIO::getexepath(argv[0], ConfigurationFilePath);
	IO::FileManager settings(ConfigurationFilePath + "config.conf");
	LFI(settings);
	sf::RenderWindow toController(
				sf::VideoMode(settings.value_INT(IO::Information::WIDTH),
						settings.value_INT(IO::Information::HEIGHT)), "Colonization");
	DisplayManager::Render render(toController);
	Window::GameController Window(render, settings, ConfigurationFilePath);
	return 0;
}
