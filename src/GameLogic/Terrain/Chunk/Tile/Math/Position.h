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
	float height;
public:
	Position();

	void setheight(float);

	const int getHeight()const;






	virtual ~Position();
};

} /* namespace Mathv */

#endif /* SRC_GAMELOGIC_TERRAIN_CHUNK_TILE_MATH_POSITION_H_ */
