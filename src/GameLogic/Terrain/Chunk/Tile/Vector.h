/*
 * Vector.h
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_
#include <memory>
#include <limits>
namespace Math {

class Vector {
	int xPos = std::numeric_limits<int>::max();
	int yPos = std::numeric_limits<int>::max();
	int xDir = std::numeric_limits<int>::max();
	int yDir = std::numeric_limits<int>::max();
public:
	Vector();
	virtual ~Vector();
	//setters
	void setPositionOfVector(int,int);
	void setDirectionOfVector(int, int);
	//getters
	const int getxPos()const;
	const int getyPos()const;

	const int getxDir()const;
	const int getyDir()const;
};
typedef std::shared_ptr<Vector> VectorPtr;

} /* namespace Mathvector */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_ */
