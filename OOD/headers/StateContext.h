/*
 * StateContext.h
 *
 *  Created on: 06.08.2018
 *      Author: root
 */

#include "../../OOD/headers/State.h"

#ifndef STATECONTEXT_H_
#define STATECONTEXT_H_

class Context{
private:
	State* state;
public:
	enum StateType {
		StateTypeOne,
		StateTypeTwo,
		StateTypeThree
	};

	Context(){
		setState(Context::StateTypeOne);
	}

	void setState(StateType stype){
		delete state;

		switch(stype){
			case StateTypeOne:
				state = new StateOne();
				break;
			case StateTypeTwo:
				state = new StateTwo();
				break;
			case StateTypeThree:
				state = new StateThree();
				break;
		}
		state->info();
	}

	void goNext(){
		state->goNext(this);
	}

	~Context(){
		delete state;
	}
};



#endif /* STATECONTEXT_H_ */
