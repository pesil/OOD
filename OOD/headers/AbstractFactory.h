/*
 * AbstractFactory.h
 *
 *  Created on: 01.08.2018
 *      Author: root
 */
#include <iostream>
#include <vector>

using namespace std;

#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_

class AbstractProductA {
public:
	virtual ~AbstractProductA() {};
	virtual void whoiam() = 0;
};

class ProductA1: public AbstractProductA{
public:
	void whoiam() {
		cout<<"ProductA1"<<endl;
	}
};

class ProductA2: public  AbstractProductA{
public:
	void whoiam() {
		cout<<"ProductA2"<<endl;
	}

};

class AbstractProductB {
public:
	virtual ~AbstractProductB() {};
	virtual void whoiam() = 0;
};

class ProductB1: public AbstractProductB{
public:
	void whoiam() {
		cout<<"ProductB1"<<endl;
	}
};

class ProductB2: public  AbstractProductB{
public:
	void whoiam() {
		cout<<"ProductB2"<<endl;
	}
};


class AbstractProductFactory {
public:
	virtual ~AbstractProductFactory() {};
	virtual AbstractProductA* createProductA() = 0;
	virtual AbstractProductB* createProductB() = 0;
};

class ProductFactory1: public AbstractProductFactory {
public:
	AbstractProductA* createProductA() {
		return new ProductA1();
	}
	AbstractProductB* createProductB() {
		return new ProductB1();
	}
};

class ProductFactory2: public AbstractProductFactory {
public:
	AbstractProductA* createProductA() {
		return new ProductA2();
	}
	AbstractProductB* createProductB() {
		return new ProductB2();
	}
};

class Bag {
public:
	vector<AbstractProductA*> a_list;
	vector<AbstractProductB*> b_list;

	void createBag(AbstractProductFactory& apf){
		a_list.push_back(apf.createProductA());
		b_list.push_back(apf.createProductB());
	}

	void info(){
		for(auto productA:a_list) productA->whoiam();
		for(auto productB:b_list) productB->whoiam();
	}
};

void abstract_factory_test();

#endif /* ABSTRACTFACTORY_H_ */
