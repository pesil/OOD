/*
 * AbstractFactory.cpp
 *
 *  Created on: 01.08.2018
 *      Author: petersil
 */

#include "AbstractFactory.h"

using namespace std;

void abstract_factory_test(){
	ProductFactory1* pf1 = new ProductFactory1();
	ProductFactory2* pf2 = new ProductFactory2();

	Bag* _bag1 = new Bag();
	Bag* _bag2 = new Bag();

	_bag1->createBag(*pf1);
	_bag2->createBag(*pf2);

	_bag1->info();
	_bag2->info();
}
