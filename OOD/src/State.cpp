/*
 * State.cpp
 *
 *  Created on: 06.08.2018
 *      Author: petersil
 */

#include "State.h"

#include "StateContext.h"

void StateOne::goNext(Context* cont){
	cont->setState(Context::StateTypeTwo);
}

void StateOne::info(){
	cout<<"StateOne"<<endl;
}

void StateTwo::goNext(Context* cont){
	cont->setState(Context::StateTypeThree);
}

void StateTwo::info(){
	cout<<"StateTwo"<<endl;
}

void StateThree::goNext(Context* cont){
	cont->setState(Context::StateTypeOne);
}

void StateThree::info(){
	cout<<"StateThree"<<endl;
}

void test_state(){
	Context* cont = new Context();
	cont->goNext();
	cont->goNext();
	cont->goNext();
	cont->goNext();
	cont->goNext();
}
