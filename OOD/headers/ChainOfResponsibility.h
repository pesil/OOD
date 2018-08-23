/*
 * ChainOfResponsibility.h
 *
 *  Created on: 01.08.2018
 *      Author: root
 */
#include <iostream>
#include <vector>

using namespace std;

#ifndef CHAINOFRESPONSIBILITY_H_
#define CHAINOFRESPONSIBILITY_H_


class Handler{
private:
	int id;
	Handler* next;
public:
	Handler(int _id,Handler* nx): id(_id),next(nx){}

	void try_handle(int req){
		if(req!=id && next) next->try_handle(req);
		else if(req==id) cout<<"handled by "<<id<<endl;
		else cout<<"Not found"<<endl;
	}
};

class CoRProducer{
private:
	Handler* chain;

public:
	CoRProducer(Handler* hnd): chain(hnd){}

	void produce(int req){
		chain->try_handle(req);
	}

};

void test_cor();


#endif /* CHAINOFRESPONSIBILITY_H_ */
