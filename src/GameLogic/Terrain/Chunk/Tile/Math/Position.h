/*
 * Position.h
 *
 *  Created on: May 17, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_MATH_POSITION_H_
#define SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_MATH_POSITION_H_

namespace Math {

class Position {
	int x ,y;
public:
	Position();

	void setPosition(int,int);

	const int getX()const;
	const int getY()const;





	virtual ~Position();
};

} /* namespace Mathv */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_MATH_POSITION_H_ */
