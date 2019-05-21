/*
 * vectorMatrix.cpp
 *
 *  Created on: May 22, 2019
 *      Author: mwawrzkow
 */

#include "vectorMatrix.h"

namespace Script {

vectorMatrix::vectorMatrix(Math::Vector* vector, std::vector<float*> array):vector(vector),array(array) {
	// TODO Auto-generated constructor stub

}
std::vector<float> vectorMatrix::createVectorMatrix(float vectorStrenght) {
	float matrix[10][10];
	//vectors for linear interpretation of matrix
	std::vector<float*> tmpVector;
	std::vector<float> vector;

	//connecting matrix with vector of pointers;
	for(int x = 0; x <= 9;++x)
		for(int y = 0; y <= 9; ++y)
			tmpVector.push_back(&matrix[x][y]);

	//filling matrix with zeros
	std::fill(*tmpVector.begin(),*tmpVector.end(),0.0f);

	//Getting vector variables into local variables
	int xPos = this->vector->getxPos();
	int yPos = this->vector->getyPos();
	int xDir = this->vector->getxDir();
	int yDir = this->vector->getyDir();
	//scalar
	float scale = vectorStrenght;

	while (xPos != xDir && yPos != yDir) {
		matrix[xPos][yPos] = scale
				* sqrt(1 / (pow((xDir - xPos), 2) * pow((yDir - yPos), 2)) + 1);
		if(xPos < xDir)
			++xPos;
		else
			--xPos;
		if(yPos < yDir )
			++yDir;
		else
			--yDir;

	}
	xPos = this->vector->getxPos();
	yPos = this->vector->getyPos();


	/*     C = (x,y)
	 *            .
	 *            /\
	 * 			 /  \
	 *          /    \
	 * 		   /      \
	 * 		  /        \
	 * 		 *----------*
	 * 		A			B
	 *
	 * 		AB = sqrt((xPos - xDir)^2 + (yPos-yDir)^2)
	 * 		AC = sqrt((xPos - x)^2 + (yPos-y)^2)
	 * 		CB = sqrt((xDir - x)^2 + (yDir - y)^2)
	 */
	for(int x = 0 ; x <= 9; ++x)
		for(int y = 0; y <= 9; ++y)
		{
			float AB = sqrt(pow((xPos-xDir),2)+pow(yPos- yDir,2));
			float AC = sqrt(pow((xPos-x),2)+pow((yPos-y),2));
			float CB = sqrt(pow((xDir - x),2)+pow((yDir - y),2));
			float circuit = AB + AC + CB;
			circuit/=2;
			float surface = sqrt(circuit*(circuit-AB)*(circuit-AC)*(circuit-CB));
			/*
			 * P = 1/2 * h * AB
			 * 2P = h * AB
			 * 2P / AB = h
			 */
			float distance = (surface *2) / AB; // H
			/*
			 *    C(x,y)
			 *     /*
			 *    / |
			 *   *--*----*
			 *     X   Z
			 *
			 *     X^2 + H^2 = AC^2
			 *     X^2 = AC^2 - H^2
			 *     X = sqrt(AC^2 - H^2)
			 *
			 *    int xvalue =  xPos + xDir * X/Z;
			 *    iny yvalue = yPos + yDir * X/Z;
			 *   vector AB
			 */
			float X = sqrt(pow(AC,2)- pow(distance,2));
			float Z = sqrt(pow(AB,2)- pow(distance,2));
			int xValue = xPos + xDir * X/Z;
			int yValue = yPos + yDir * X/Z;

			matrix[x][y]=pow(distance,-1*vectorStrenght) * matrix[xValue][yValue];
		}
	for(int x = 0; x<= 9;++x)
		for(int y = 0; y <= 9;++y)
			vector.push_back(matrix[x][y]);
	return vector;
}

void vectorMatrix::applyVector(float vectorStrenght) {

}
vectorMatrix::~vectorMatrix() {
	// TODO Auto-generated destructor stub
}

} /* namespace Script */
