/*
 * VisualizationManager.h
 *
 *  Created on: Apr 19, 2010
 *      Author: PedroLopes
 */

#ifndef VISUALIZATIONMANAGER_H_
#define VISUALIZATIONMANAGER_H_

#include "BasicManager.h"
#include <string>

namespace MtDjing {

class VisualizationManager: public MtDjing::BasicManager {
public:

	VisualizationManager(string _name, int _id, bool _stupid);
	virtual ~VisualizationManager();

	bool getStupid() const;

protected:
	bool stupid;
};

}

#endif /* VISUALIZATIONMANAGER_H_ */


