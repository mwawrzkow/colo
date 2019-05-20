/*
 * Gauss.h
 *
 *  Created on: May 19, 2019
 *      Author: mwawrzkow
 */


#ifndef SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_GAUSS_H_
#define SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_GAUSS_H_
#include "../../../Chunk/Tile/Tile.h"
#include <math.h>
namespace Script {

class Gauss {
    std::vector<float*> array;
    float standartDeviation;
    Math::Vector *vector;
    float sum, avarge;
    void CalculateSum();
    void calStandardDeviation();
    std::vector<float> gaussresult;
    void result();
public:
	Gauss(TerrainUnits::Tile&);
	virtual ~Gauss();
    void partGaussCalculation(int,int,int,int);
    float getStandartDeviation();
};

} /* namespace Script */

#endif /* SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_GAUSS_H_ */
