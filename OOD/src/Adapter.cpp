/*
 * Adapter.cpp
 *
 *  Created on: Aug 22, 2018
 *      Author: petersil
 */

#include "Adapter.h"

void test_adapter(){
	Sensor* sens = new Adapter(new FahrenheitSensor);
	std::cout<< sens->get_temperature() <<std::endl;
}

