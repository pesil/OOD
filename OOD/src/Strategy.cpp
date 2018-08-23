/*
 * Strategy.cpp
 *
 *  Created on: 06.08.2018
 *      Author: petersil
 */

#include "Strategy.h"

void test_strategy(){
	ActionStrategy as;
	as.execute(new ActionA());
	as.execute(new ActionB());
	as.execute(new ActionC());
}

