/*
 * Tree.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#include "Tree.h"
#include <cstdlib>
namespace DeadNature {

Tree::Tree():Amount((rand()%100)+10) {
	// TODO Auto-generated constructor stub

}
int Tree::cutTree(){
	int a = 10,tmp = Amount;
	tmp -= a;
	if(tmp < 0 )
		a = Amount %10;
	Amount-=a;
	return a;
}
void Tree::shouldIDie()
{
	if(Amount <= 0 )
		this->~Tree();
}
Tree::~Tree() {
	// TODO Auto-generated destructor stub
}

} /* namespace DeadNature */
