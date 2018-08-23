/*
 * Builder.cpp
 *
 *  Created on: 02.08.2018
 *      Author: petersil
 */

#include "Builder.h"

void test_builder(){
	Director dir;
	ABagBuilder abb;
	BBagBuilder bbb;
	Bag_BP* bag1 = dir.produce(abb,2);
	Bag_BP* bag2 = dir.produce(bbb,1);
	bag1->info();
	bag2->info();
}


