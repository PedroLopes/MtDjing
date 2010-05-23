/*
 * MyThreadTing.h
 *
 *  Created on: Apr 20, 2010
 *      Author: PedroLopes
 */

#ifndef MYTHREADTING_H_
#define MYTHREADTING_H_

//#include <Thread.hpp>
#include <ting/Thread.hpp>

class MyThreadTing: public ting::Thread {
public:
	MyThreadTing(int _a);
	virtual ~MyThreadTing();
	void Run();


protected:
	    int a;
	    int b;

};

#endif /* MYTHREADTING_H_ */
