/*
 * FactoryMethod.cpp
 *
 *  Created on: 01.08.2018
 *      Author: petersil
 */

#include "FactoryMethod.h"

#include <vector>


using namespace std;

void factory_method_test(){
	vector<BaseProduct*> bp_list;
	DerivedFactory1* df1 = new DerivedFactory1();
	DerivedFactory2* df2 = new DerivedFactory2();

	bp_list.push_back(df1->createBaseProduct());
	bp_list.push_back(df2->createBaseProduct());

	for(auto dp:bp_list) dp->whoiam();
}
