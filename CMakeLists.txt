cmake_minimum_required (VERSION 2.6)

project (Colonization)
add_library(TerrainLogic 
	src/GameLogic/Terrain/Chunk/Tile/Tile.cpp
	src/GameLogic/Terrain/Chunk/Tile/Vector.cpp
	src/GameLogic/Terrain/Chunk/Chunk.cpp
)
add_library(ProceduralGeneration
	src/GameLogic/Terrain/ProceduralGenerator/Terrain/Scripts/Gauss.cpp
	src/GameLogic/Terrain/ProceduralGenerator/Terrain/TerrainGenerator.cpp
)

add_executable(Colonization Colonization.cpp )
target_link_libraries(Colonization TerrainLogic ProceduralGeneration)
