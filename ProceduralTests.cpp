#define CATCH_CONFIG_MAIN 
#include <catch2/catch.hpp>
#include "src/GameLogic/Terrain/Map.h"

namespace predefinied_sets {
TerrainUnits::Tile testTile() {
	TerrainUnits::Tile test;
	Math::VectorPtr vec(test.getVector());
	vec->setDirectionOfVector(0,0);
	vec->setPositionOfVector(3,3);
	std::vector<float*> set =  test.getMatrix();
	for(int i = 0; i < 100; i++)
	{
		if(i < 50 )
			*set[i] = 0.5;
		else if(i < 100)
			*set[i] = 1.0;
	}
	return test;
}

}

TEST_CASE("Testing Generator Engine", "Procedural Generator") {
	SECTION("Test Tile Class") {
		TerrainUnits::Tile tile;
		Math::VectorPtr vector(tile.getVector());
		vector->setPositionOfVector(2, 2);
		vector->setDirectionOfVector(3, 3);
		REQUIRE(tile.getVector()->getxPos() == 2);
		REQUIRE(tile.getVector()->getxDir() == 3);
	}
}
TEST_CASE("Algorithms tests", "Script/.."){
	SECTION("Vector  Test"){
		TerrainUnits::Tile T;
		Math::VectorPtr vector(new Math::Vector);
		T.setVector(vector);
		vector->setDirectionOfVector(0,0);
		vector->setPositionOfVector(1,1);
		Script::vectorMatrix vM(T.getVector(),T.getMatrix());
		vM.applyVector(1);
		REQUIRE(vM.getWeightVector().at(0) == 1);
		REQUIRE(vM.getWeightVector().at(11) == 0.707106769f);
	}
	SECTION("Gauss Algorithm tests") {
		TerrainUnits::Tile tile = predefinied_sets::testTile();
		Script::Gauss gauss(tile);
		REQUIRE(gauss.getavarge() == 0.75f);
		REQUIRE(gauss.getStandartDeviation() ==0.25f);
	}
	SECTION("Vector Algorithm tests")
	{
		TerrainUnits::Tile tile = predefinied_sets::testTile();

	}

}
