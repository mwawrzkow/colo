/*
 * vectorMatrix.cpp
 *
 *  Created on: May 22, 2019
 *      Author: mwawrzkow
 */

#include "vectorMatrix.h"

namespace Script {

vectorMatrix::vectorMatrix(Math::VectorPtr vector, std::vector<float*> array) :
		vector(vector), array(array) {

}
void vectorMatrix::createVectorMatrix(float vectorStrenght) {
	float matrix[10][10] = { };

	//vectors for linear interpretation of matrix
	std::vector<float> vector;

	//Getting vector variables into local variables
	int xPos = this->vector->getxPos();
	int yPos = this->vector->getyPos();
	int xDir = this->vector->getxDir();
	int yDir = this->vector->getyDir();
	//scalar
	float scale = vectorStrenght;
	std::vector<Hidden::Pos> points;
	do {
		Hidden::Pos tmp;
		tmp.x = xPos;
		tmp.y = yPos;
		points.push_back(tmp);
		if (xPos == xDir) { /*Intentionally empty*/
		} else if (xPos > xDir)
			xPos--;
		else
			xPos++;
		if (yPos == yDir) {/*Intentionally empty*/
		} else if (yPos > yDir)
			yPos--;
		else
			yPos++;
		float distance = sqrt(pow(tmp.x - xDir, 2) + pow(tmp.y - yDir, 2));
		matrix[tmp.x][tmp.y] = scale / (distance);
	} while (xPos != xDir || yDir != yPos);
	xPos = this->vector->getxPos();
	yPos = this->vector->getyPos();
	for (int x = 0; x <= 9; ++x)
		for (int y = 0; y <= 9; ++y) {
			float distance = 9999999;
			int xValue = 99999999, yValue = 999999;
			for (auto it = points.begin(); it < points.end(); it++) {
				float tmp_Distance = sqrt(
						pow(x - it->x, 2) + pow(y - it->y, 2));
				if (tmp_Distance < distance) {
					distance = tmp_Distance;
					xValue = it->x;
					yValue = it->y;
				}
			}
			if (matrix[x][y] == 0)
				matrix[x][y] = matrix[xValue][yValue] / (pow(distance, vectorStrenght) + 1);
		}
	for (int x = 0; x <= 9; ++x)
		for (int y = 0; y <= 9; ++y)
			vector.push_back(matrix[x][y]);

	this->vectorWeight = vector;
}
std::vector<float> vectorMatrix::getWeightVector() {
	return vectorWeight;
}
void vectorMatrix::applyVector(float vectorStrenght) {
	createVectorMatrix(vectorStrenght);

}
bool vectorMatrix::isObtuse(float a, float b, float c) const {
	if (pow(a, 2) + pow(b, 2) < pow(c, 2))
		return true;
	if (pow(a, 2) + pow(c, 2) < pow(b, 2))
		return true;
	return false;

}
bool vectorMatrix::isRectangular(float a, float b, float c) const {
	if (pow(a, 2) + pow(b, 2) == pow(c, 2))
		return true;
	if (pow(b, 2) + pow(c, 2) == pow(a, 2))
		return true;
	if (pow(a, 2) + pow(c, 2) == pow(b, 2))
		return true;
	return false;
}
vectorMatrix::~vectorMatrix() {
// TODO Auto-generated destructor stub
}

} /* namespace Script */
