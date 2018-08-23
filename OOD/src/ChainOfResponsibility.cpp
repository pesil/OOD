/*
 * ChainOfResponsibility.cpp
 *
 *  Created on: 01.08.2018
 *      Author: petersil
 */

#include "ChainOfResponsibility.h"

void test_cor(){
	Handler* hnd1 = new Handler(1,nullptr);
	Handler* hnd2 = new Handler(2,hnd1);
	Handler* hnd3 = new Handler(3,hnd2);
	Handler* hnd4 = new Handler(4,hnd3);
	CoRProducer prod(hnd4);

	prod.produce(4);

}


