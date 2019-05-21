/*
 * vectorMatrix.h
 *
 *  Created on: May 22, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_VECTORMATRIX_H_
#define SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_VECTORMATRIX_H_
#include <vector>
#include <math.h>
#include "../../../Chunk/Tile/Vector.h"
namespace Script {

class vectorMatrix {
	Math::Vector *vector;
	std::vector<float> createVectorMatrix(float vectorStrenght);
public:
	vectorMatrix(Math::Vector*,std::vector<float*>);
	void applyVector(float);
	virtual ~vectorMatrix();
public:
	std::vector<float> gaussresult;
	std::vector<float*> array;

};

} /* namespace Script */

#endif /* SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_VECTORMATRIX_H_ */
