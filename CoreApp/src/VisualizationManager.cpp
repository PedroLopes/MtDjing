/*
 * VisualizationManager.cpp
 *
 *  Created on: Apr 19, 2010
 *      Author: PedroLopes
 */

#include "VisualizationManager.h"

MtDjing::VisualizationManager::VisualizationManager(string _name, int _id, bool _stupid) : MtDjing::BasicManager(_name, _id)
{
	stupid = _stupid;
	// TODO Auto-generated constructor stub
	//MtDjing::BasicManager();

}

MtDjing::VisualizationManager::~VisualizationManager() {
	// TODO Auto-generated destructor stub
}

bool MtDjing::VisualizationManager::getStupid() const
{
  return stupid;
}

