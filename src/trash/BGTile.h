/*
 * BGTile.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef BGTILE_H_
#define BGTILE_H_

#include "Entity.h"

namespace ty {

class BGTile: public Entity {
public:
	BGTile();
	virtual ~BGTile();
};

} /* namespace ty */

namespace sfml {

class BGTile: public ty::BGTile {
public:
	BGTile();
	virtual ~BGTile();
};

} /* namespace sfml */
#endif /* BGTILE_H_ */

