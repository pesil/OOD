/*
 * Strategy.h
 *
 *  Created on: 06.08.2018
 *      Author: root
 */

#include <iostream>
#include <vector>

using namespace std;

#ifndef STRATEGY_H_
#define STRATEGY_H_

class ActionInterface{
public:
	virtual ~ActionInterface(){}
	virtual void produce() = 0;
};

class ActionA: public ActionInterface{
public:
	void produce(){
		cout<<"ActionA"<<endl;
	}
};

class ActionB: public ActionInterface{
public:
	void produce(){
		cout<<"ActionB"<<endl;
	}
};
class ActionC: public ActionInterface{
public:
	void produce(){
		cout<<"ActionC"<<endl;
	}
};

class ActionStrategy{
public:
	void execute(ActionInterface* ai){
		ai->produce();
	}
};

void test_strategy();

#endif /* STRATEGY_H_ */
