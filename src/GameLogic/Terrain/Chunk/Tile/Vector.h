/*
 * Vector.h
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_
namespace Math {

class Vector {
	int xPos, yPos;
	int xDir, yDir;
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

} /* namespace Mathvector */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_VECTOR_H_ */
