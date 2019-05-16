/*
 * Vector.h
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_
#include "Math/Position.h"
namespace Math {

class Vector {
	Position position;
	Position direction;
public:
	Vector();
	virtual ~Vector();
	//setters
	void setPositionOfVector(int,int);
	void setDirectionOfVector(int, int);
	//getters
	const Position getPosition()const;
	const Position getDirection()const;
};

} /* namespace Mathvector */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_ */
