/*
 * TemplateMethod.cpp
 *
 *  Created on: 06.08.2018
 *      Author: petersil
 */

#include "TemplateMethod.h"

void test_tm(){
	TemplateMethodBase* tmb1 = new TemplateMethodBase();
	TemplateMethodBase* tmb2 = new TemplateMethodDerived1();
	TemplateMethodBase* tmb3 = new TemplateMethodDerived2();
	tmb1->produce();
	tmb2->produce();
	tmb3->produce();
}
