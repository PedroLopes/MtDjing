/*
 * BasicManager.h
 *
 *  Created on: Apr 19, 2010
 *      Author: PedroLopes
 */

using namespace std;

#ifndef BASICMANAGER_H_
#define BASICMANAGER_H_

#include <string>

namespace MtDjing {

class BasicManager {
public:
	BasicManager(string theName, int id);
	virtual ~BasicManager();

	string getName() const;
	int getId() const;
    string getHostname() const
    {
        return hostname;
    }

    int getPortnumber() const
    {
        return portnumber;
    }

    void setHostname(string hostname)
    {
        this->hostname = hostname;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setPortnumber(int portnumber)
    {
        this->portnumber = portnumber;
    }

protected:
  string name;
  int id;
  string hostname;
  int portnumber;

};

}

#endif /* BASICMANAGER_H_ */
