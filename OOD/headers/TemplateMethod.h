/*
 * TemplateMethod.h
 *
 *  Created on: 06.08.2018
 *      Author: root
 */

#include <iostream>
#include <vector>

using namespace std;

#ifndef TEMPLATEMETHOD_H_
#define TEMPLATEMETHOD_H_

class TemplateMethodBase{
public:
	void a(){
		cout<<"a"<<endl;
	}
	virtual void b(){
		cout<<"b"<<endl;
	}
	void c(){
		cout<<"c"<<endl;
	}
	virtual void d(){
		cout<<"d"<<endl;
	}
	void e(){
		cout<<"e"<<endl;
	}

	void produce(){
		a();
		b();
		c();
		d();
		e();
	}
	virtual ~TemplateMethodBase() {}

};

class TemplateMethodDerived1: public TemplateMethodBase{
public:
	void b(){
		cout<<"1"<<endl;
	}

	void d(){
		cout<<"2"<<endl;
	}
};

class TemplateMethodDerived2: public TemplateMethodBase{
public:
	void b(){
		cout<<"B"<<endl;
	}

	void d(){
		cout<<"D"<<endl;
	}
};

void test_tm();

#endif /* TEMPLATEMETHOD_H_ */
