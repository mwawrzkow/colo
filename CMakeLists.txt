cmake_minimum_required (VERSION 3.0)

project(Colonization)
add_library(Noise 
			FastNoise.cpp)

add_library(World 
			src/GameLogic/Map.cpp)

add_executable(Colonization main.cpp)

target_link_libraries(Colonization World Noise)

