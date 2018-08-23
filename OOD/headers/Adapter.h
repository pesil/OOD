/*
 * Adapter.h
 *
 *  Created on: Aug 22, 2018
 *      Author: petersil
 */

#include <iostream>
#include <vector>

#ifndef HEADERS_ADAPTER_H_
#define HEADERS_ADAPTER_H_


class FahrenheitSensor {
private:
	int delta = 10;
	int cur_temp = 0;
public:
	int get_fahrenheits(){
		return cur_temp+delta;
	}
};

class Sensor{
public:
	virtual int get_temperature() = 0;
	virtual ~Sensor() {};
};

class Adapter: public Sensor{
private:
	FahrenheitSensor* fs;
public:
	Adapter(FahrenheitSensor* _fs):fs(_fs){}

	~Adapter(){
		delete fs;
	}

	int get_temperature(){
		return fs->get_fahrenheits();
	}
};

void test_adapter();

#endif /* HEADERS_ADAPTER_H_ */
