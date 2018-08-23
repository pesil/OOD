/*
 * State.h
 *
 *  Created on: 06.08.2018
 *      Author: root
 */
#include <iostream>
#include <vector>

using namespace std;

#ifndef STATE_H_
#define STATE_H_

class Context;

class State{
public:
	virtual ~State() {}
	virtual void goNext(Context*) = 0;
	virtual void info() = 0;
};

class StateOne: public State {
	void goNext(Context* cont);
	void info();
};

class StateTwo: public State {
	void goNext(Context* cont);
	void info();
};

class StateThree: public State {
	void goNext(Context* cont);
	void info();
};

void test_state();



#endif /* STATE_H_ */
