/*
 * Gauss.h
 *
 *  Created on: May 19, 2019
 *      Author: mwawrzkow
 */


#ifndef SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_GAUSS_H_
#define SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_GAUSS_H_
#include "../../../Chunk/Tile/Tile.h"
namespace Script {

class Gauss {


public:
	Gauss(std::vector<float*>);
	virtual ~Gauss();
};

} /* namespace Script */

#endif /* SRC_GAMELOGIC_TERRAIN_PROCEDURALGENERATOR_TERRAIN_SCRIPTS_GAUSS_H_ */
