cmake_minimum_required (VERSION 3.0)

project(Colonization)
set(CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules/" ${CMAKE_MODULE_PATH})
find_package(Poco REQUIRED COMPONENTS Foundation Net Zip )
find_package(SFML  REQUIRED graphics window system)

add_library(Noise 
			FastNoise.cpp)

add_library(World 
			src/GameLogic/Map/Map.cpp
			src/GameLogic/DeadNature/Ore.cpp
			src/GameLogic/DeadNature/Tree.cpp
			src/GameLogic/Controller.cpp)
add_library(Players 
			src/GameLogic/Players/Player.cpp
			src/GameLogic/Players/Builder.cpp)

add_library(Buildings 
			src/GameLogic/Units/Buildings/Building.cpp)		
			
add_library(Graphic 								
					src/Graphic/WindowStates/FileIO/FileInformation/FileInformation.cpp
					src/Graphic/WindowStates/FileIO/FileManager.cpp
					
					src/Graphic/WindowStates/LoadSprite/texturebackend/Cache.cpp
					src/Graphic/WindowStates/LoadSprite/texturebackend/SpriteOptions.cpp
					
					src/Graphic/WindowStates/LoadSprite/ClickEvent.cpp
					src/Graphic/WindowStates/LoadSprite/Object.cpp
					src/Graphic/WindowStates/LoadSprite/ObjectInterface.cpp
					src/Graphic/WindowStates/LoadSprite/ObjectUpdate.cpp
					src/Graphic/WindowStates/LoadSprite/RenderClass.cpp
	
					src/Graphic/WindowStates/State.cpp
					
					src/Graphic/WindowPrototypes/EventHandler.cpp
					src/Graphic/WindowPrototypes/MSSFMLView.cpp
					src/Graphic/WindowPrototypes/Render.cpp
					
				src/Controllers/Graphic.cpp
				src/Controllers/Events.cpp
				src/Controllers/Render.cpp
				
				src/WindowStates/Screen.cpp
				src/WindowStates/Screen/Buttons.cpp
				
				
				
				src/WindowStates/Game.cpp
				src/WindowStates/Game/Terrain.cpp
				
				
			src/GameLogic/Map/Map.cpp
			src/GameLogic/DeadNature/Ore.cpp
			src/GameLogic/DeadNature/Tree.cpp
			src/GameLogic/Controller.cpp
			
			src/GameLogic/Players/Player.cpp
			src/GameLogic/Players/Builder.cpp
			
			
			FastNoise.cpp
			
			src/GameLogic/Units/Buildings/Building.cpp)

add_library(IO
			src/FileIOController.cpp)

add_executable(Colonization main.cpp)

target_link_libraries(Colonization World Noise Players Buildings Graphic IO)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Colonization ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
    target_link_libraries(Colonization sfml-system sfml-window sfml-graphics sfml-audio)
    
endif()

target_link_libraries(Colonization Poco::Foundation Poco::Util Poco::Net)

