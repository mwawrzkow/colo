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
#include "vectorMatrix.h"
namespace Script {

class Gauss :public vectorMatrix {
    float standartDeviation;
    float sum, avarge;
    void CalculateSum();
    void calStandardDeviation();
    void result();
public:
	Gauss(TerrainUnits::Tile&);
	virtual ~Gauss();
public:
    void partGaussCalculation(int,int,int,int);
    float getStandartDeviation();
    float getavarge();
};

} /* namespace Script */

#endif /* SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_GAUSS_H_ */
