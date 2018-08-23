/*
 * Observer.cpp
 *
 *  Created on: 01.08.2018
 *      Author: petersil
 */

#include "Observer.h"

void observer_test(){
	Producer prod;
	Consumer* cons1 = new Consumer(1,prod);
	Consumer* cons2 = new Consumer(2,prod);

	prod.produce();
}


