cmake_minimum_required (VERSION 3.0)

project(Colonization)
add_library(Noise 
			FastNoise.cpp)

add_library(World 
			src/GameLogic/Map/Map.cpp
			src/GameLogic/DeadNature/Ore.cpp
			src/GameLogic/DeadNature/Tree.cpp
			src/GameLogic/GameLogic.cpp)

add_executable(Colonization main.cpp)

target_link_libraries(Colonization World Noise)

