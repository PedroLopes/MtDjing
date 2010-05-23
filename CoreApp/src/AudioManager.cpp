/*
 * AudioManager.cpp
 *
 *  Created on: Apr 19, 2010
 *      Author: PedroLopes
 */

#include "AudioManager.h"

namespace MtDjing {

MtDjing::AudioManager::AudioManager(string _name, int _id, bool _soundOn) : MtDjing::BasicManager(_name, _id)
{

	soundOn = _soundOn;
}

MtDjing::AudioManager::~AudioManager() {

}

}
