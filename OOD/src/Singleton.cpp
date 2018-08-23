/*
 * Singleton.cpp
 *
 *  Created on: 01.08.2018
 *      Author: petersil
 */

#include "Singleton.h"


void Singleton::whoiam() {
	std::cout<<"Singleton"<<std::endl;
}

Singleton* Singleton::_singleton = nullptr;

Singleton& Singleton::instanceOf(){
	if(!_singleton){
		_singleton = new Singleton();
	}
	return *_singleton;
}

void singleton_test(){
	Singleton& sing = Singleton::instanceOf();
	sing.whoiam();
}
