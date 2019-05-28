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
	Math::VectorPtr vector;
	std::vector<float> vectorWeight;
	void createVectorMatrix(float vectorStrenght);
	bool isObtuse(float,float,float)const;
	bool isRectangular(float,float,float)const;
public:
	vectorMatrix(Math::VectorPtr,std::vector<float*>);
	void applyVector(float);
	std::vector<float> getWeightVector();
	virtual ~vectorMatrix();
public:
	std::vector<float> result;
	std::vector<float*> array;

};

} /* namespace Script */

#endif /* SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_VECTORMATRIX_H_ */
