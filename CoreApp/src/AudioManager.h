/*
 * AudioManager.h
 *
 *  Created on: Apr 19, 2010
 *      Author: PedroLopes
 */

#ifndef AUDIOMANAGER_H_
#define AUDIOMANAGER_H_

#include "BasicManager.h"
#include <string>

namespace MtDjing {

class AudioManager: public MtDjing::BasicManager {
public:
	AudioManager(string _name, int _id, bool _soundOn);
	virtual ~AudioManager();
    string getArgs() const
    {
        return args;
    }

    string getDir() const
    {
        return dir;
    }

    string getExec() const
    {
        return exec;
    }

    bool getSoundOn() const
    {
        return soundOn;
    }

    void setArgs(string args)
    {
        this->args = args;
    }

    void setDir(string dir)
    {
        this->dir = dir;
    }

    void setExec(string exec)
    {
        this->exec = exec;
    }

    void setSoundOn(bool soundOn)
    {
        this->soundOn = soundOn;
    }

protected:
	string dir;
	string exec;
	string args;
	bool soundOn;

};

}
#endif /* AUDIOMANAGER_H_ */
