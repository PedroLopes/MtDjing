/*
 * MyThreadTing.cpp
 *
 *  Created on: Apr 20, 2010
 *      Author: PedroLopes
 */

#include "MyThreadTing.h"
#include <iostream>

MyThreadTing::MyThreadTing(int _a) {
	// TODO Auto-generated constructor stub
	this->a = _a;

}

//override
void MyThreadTing::Run(){
	        //do some thread actions
	/*if(this->a > 1)
		    system("\"D:/XP32/Program\ Files/pd/bin/pd.exe\"");
	else {

		while (1)
		cout << "Not inited";
	}*/
};

MyThreadTing::~MyThreadTing() {
	// TODO Auto-generated destructor stub
}
