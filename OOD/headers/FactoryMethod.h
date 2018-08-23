/*
 * FactoryMethod.h
 *
 *  Created on: 01.08.2018
 *      Author: root
 */

#include <iostream>

#ifndef FACTORYMETHOD_H_
#define FACTORYMETHOD_H_

class BaseProduct {
public:
	virtual ~BaseProduct () {};
	virtual void whoiam() = 0;
};

class DerivedProduct1: public BaseProduct{
public:
	DerivedProduct1() {};
	~DerivedProduct1() {}

	void whoiam() {
		std::cout<<"DerivedProduct1"<<std::endl;
	}
};

class DerivedProduct2: public BaseProduct{
public:
	DerivedProduct2() {};
	~DerivedProduct2() {};
	void whoiam() {
		std::cout<<"DerivedProduct2"<<std::endl;
	}
};

class BaseFactory {
public:
	virtual ~BaseFactory () {};

	virtual BaseProduct* createBaseProduct() = 0;
};

class DerivedFactory1: public BaseFactory{
public:
	DerivedFactory1() {}
	~DerivedFactory1 () {}

	BaseProduct* createBaseProduct(){
		return new DerivedProduct1();
	}
};

class DerivedFactory2: public BaseFactory{
public:
	DerivedFactory2() {}
	~DerivedFactory2() {}

	BaseProduct* createBaseProduct(){
		return new DerivedProduct2();
	}
};

void factory_method_test();

#endif /* FACTORYMETHOD_H_ */
