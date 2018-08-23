/*
 * Observer.h
 *
 *  Created on: 01.08.2018
 *      Author: root
 */

#include <vector>
#include <iostream>

using namespace std;

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer {
public:
	virtual ~Observer() {}
	virtual void notify() = 0;
};

class Producer{
private:
	vector<Observer*> consumers;
public:
	void add_consumer(Observer* obs){
		consumers.push_back(obs);
	}

	void produce(){
		for(auto cons:consumers) cons->notify();
	}
};

class Consumer: public Observer {
private:
	int _id;
public:
	Consumer(int id,Producer& prod):_id(id){
		prod.add_consumer(this);
	}

	void notify(){
		cout<<"Consumer "<<_id<<" notified"<<endl;
	}
};

void observer_test();

#endif /* OBSERVER_H_ */
