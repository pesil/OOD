/*
 * Singleton.h
 *
 *  Created on: 01.08.2018
 *      Author: root
 */
#include <iostream>
using namespace std;

#ifndef SINGLETON_H_
#define SINGLETON_H_


class Singleton {
private:
	static Singleton* _singleton;
public:
	static Singleton& instanceOf();
	void whoiam();
};

void singleton_test();

#endif /* SINGLETON_H_ */
