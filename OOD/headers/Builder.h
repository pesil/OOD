/*
 * Builder.h
 *
 *  Created on: 02.08.2018
 *      Author: root
 */
#include <iostream>
#include <vector>

using namespace std;

#ifndef BUILDER_H_
#define BUILDER_H_

class Product1{
public:
	void info(){
		cout<<"Product1"<<endl;
	}
};

class Product2{
public:
	void info(){
		cout<<"Product2"<<endl;
	}
};

class Product3{
public:
	void info(){
		cout<<"Product3"<<endl;
	}
};

class Product4{
public:
	void info(){
		cout<<"Product4"<<endl;
	}
};

class Product5{
public:
	void info(){
		cout<<"Product5"<<endl;
	}
};

class Bag_BP{
public:
	vector<Product1*> p1_list;
	vector<Product2*> p2_list;
	vector<Product3*> p3_list;
	vector<Product4*> p4_list;
	vector<Product5*> p5_list;

	void info(){
		for(auto p:p1_list) p->info();
		for(auto p:p2_list) p->info();
		for(auto p:p3_list) p->info();
		for(auto p:p4_list) p->info();
		for(auto p:p5_list) p->info();
	}
};

class BagBuilder{
public:
	Bag_BP* bag;
	void createBag() {
		bag = new Bag_BP();
	}
	virtual void createProduct1(int cnt) {}
	virtual void createProduct2(int cnt) {}
	virtual void createProduct3(int cnt) {}
	virtual void createProduct4(int cnt) {}
	virtual void createProduct5(int cnt) {}

	virtual ~BagBuilder() {}
};

class ABagBuilder: public BagBuilder{
public:
	void createProduct1(int cnt) {
		while(cnt--) bag->p1_list.emplace_back();
	}
	void createProduct2(int cnt) {
		while(cnt--) bag->p2_list.emplace_back();
	}
	void createProduct3(int cnt) {
		while(cnt--) bag->p3_list.emplace_back();
	}
};

class BBagBuilder: public BagBuilder{
public:
	void createProduct3(int cnt) {
		while(cnt--) bag->p3_list.emplace_back();
	}
	void createProduct4(int cnt) {
		while(cnt--) bag->p4_list.emplace_back();
	}
	void createProduct5(int cnt) {
		while(cnt--) bag->p5_list.emplace_back();
	}
};

class Director {
public:
	Bag_BP* produce(BagBuilder& bb,int cnt){
		bb.createBag();
		bb.createProduct1(cnt);
		bb.createProduct2(cnt);
		bb.createProduct3(cnt);
		bb.createProduct4(cnt);
		bb.createProduct5(cnt);
		return bb.bag;
	}
};

void test_builder();

#endif /* BUILDER_H_ */
