/*
 * Gauss.cpp
 *
 *  Created on: May 19, 2019
 *      Author: mwawrzkow
 */

#include "Gauss.h"
#include <math.h>
namespace Script {

Gauss::Gauss(TerrainUnits::Tile &Tile) {
	CalculateSum();
}

void Gauss::CalculateSum() {
	float sum = 0;
	for (float *e : array) {
		sum += *e;
	}
	this->sum = sum;
	this->avarge = sum / 100;
	calStandardDeviation();

}
void Gauss::calStandardDeviation() {
	std::vector<float> diferences;
	for (float *e : array)
		diferences.push_back(sqrt(pow(avarge - *e, 2)));
	float standardDeviation = 0;
	for (float &e : diferences)
		standardDeviation += pow(e, 2);
	this->standartDeviation = sqrt(standardDeviation) / 10;
	getResult();
}
void Gauss::getResult() {
	for (float*e : array) {
		float toexp;
		toexp = 1 / (standartDeviation * sqrt(2 * M_PI));
		toexp *= exp((-1 * *e - avarge) / (2 * pow(standartDeviation, 2)));
		result.push_back(toexp);
	}

}

void Gauss::partGaussCalculation(int startx, int starty, int endx, int endy) {
	for (int e = startx; e <= endx; e++) {
		for (int z = starty; z <= endy; z++) {
			*array.at(e + z) = result.at(e + z);
		}
	}

}
float Gauss::getStandartDeviation() {
	return standartDeviation;
}

float Gauss::getavarge() {
	return avarge;
}

Gauss::~Gauss() {
	// TODO Auto-generated destructor stub
}

} /* namespace Script */
