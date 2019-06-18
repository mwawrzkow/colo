cmake_minimum_required (VERSION 3.0)

project(Colonization)

find_package(Poco REQUIRED COMPONENTS Foundation Net Zip )
find_package(SFML  REQUIRED graphics window system)

add_library(Noise 
			FastNoise.cpp)

add_library(World 
			src/GameLogic/Map/Map.cpp
			src/GameLogic/DeadNature/Ore.cpp
			src/GameLogic/DeadNature/Tree.cpp
			src/GameLogic/GameLogic.cpp)
add_library(Players 
			src/GameLogic/Players/Player.cpp)

add_library(Buildings 
			src/GameLogic/Units/Buildings/Building.cpp
			src/GameLogic/Units/Buildings/Home.cpp
			src/GameLogic/Units/Buildings/Mine.cpp)		
			
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
			)		

add_executable(Colonization main.cpp)

target_link_libraries(Colonization World Noise Players Buildings Graphic)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Colonization ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
    target_link_libraries(Colonization sfml-system sfml-window sfml-graphics sfml-audio)
    
endif()

target_link_libraries(Colonization Poco::Foundation Poco::Util Poco::Net)

