/*
 * BasicManager.cpp
 *
 *  Created on: Apr 19, 2010
 *      Author: PedroLopes
 */

#include "BasicManager.h"

namespace MtDjing {

BasicManager::BasicManager(string _name, int _id)
{
  name = _name;
  id = _id;
}

string BasicManager::getName() const
{
  return name;
}

int BasicManager::getId() const
{
  return id;
}



BasicManager::~BasicManager() {
	// TODO Auto-generated destructor stub
}

}
