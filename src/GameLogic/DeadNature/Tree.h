/*
 * Tree.h
 *
 *  Created on: Jun 18, 2019
 *      Author: mwawrzkow
 */

#ifndef SRC_GAMELOGIC_DEADNATURE_TREE_H_
#define SRC_GAMELOGIC_DEADNATURE_TREE_H_

namespace DeadNature {

class Tree {
	int Amount;
public:
	Tree();
	virtual ~Tree();
	int cutTree();
	void shouldIDie();
};

} /* namespace DeadNature */

#endif /* SRC_GAMELOGIC_DEADNATURE_TREE_H_ */
