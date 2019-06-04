cmake_minimum_required (VERSION 3.0)

project (Colonization)
add_library(Map 
	src/GameLogic/Terrain/Map.cpp
	src/GameLogic/Terrain/Chunk/Tile/Tile.cpp
	src/GameLogic/Terrain/Chunk/Tile/Vector.cpp
	src/GameLogic/Terrain/Chunk/Chunk.cpp
	src/GameLogic/Terrain/ProceduralGenerator/Terrain/Scripts/Gauss.cpp
	src/GameLogic/Terrain/ProceduralGenerator/Terrain/Scripts/vectorMatrix.cpp
	src/GameLogic/Terrain/ProceduralGenerator/Terrain/Scripts/Functions.cpp
	src/GameLogic/Terrain/ProceduralGenerator/Terrain/TerrainGenerator.cpp
)



find_package(Catch2 REQUIRED)

include(CTest)
include(ParseAndAddCatchTests)
add_executable(TerrainTests ProceduralTests.cpp)

target_link_libraries(TerrainTests Catch2::Catch2 Map)

add_executable(Colonization Colonization.cpp )
target_link_libraries(Colonization Map)

