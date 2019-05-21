#define CATCH_CONFIG_MAIN 
#include <catch2/catch.hpp>
#include "src/GameLogic/Terrain/Map.h"

TEST_CASE("Testing Generator Engine", "Procedural Generator"){
    SECTION("Test Tile Class"){
        TerrainUnits::Tile tile;
        Math::Vector &vector = *tile.getVector();
        vector.setPositionOfVector(2,2);
        vector.setDirectionOfVector(3,3);
        REQUIRE(tile.getVector()->getxPos() == 2);
        REQUIRE(tile.getVector()->getxDir() == 3);
    }
   SECTION("Test Gauss Class"){
     TerrainUnits::Tile tile;
     Math::Vector &vector = *tile.getVector();
     vector.setDirectionOfVector(0,0);
     vector.setPositionOfVector(3,4);
     Script::Gauss gauss(tile);
     REQUIRE(gauss.getStandartDeviation() == 0);
    }
   SECTION("Basic Test for World Generator")
   {
	   Map::Map map();
	   REQUIRE(true);
   }
       
}
