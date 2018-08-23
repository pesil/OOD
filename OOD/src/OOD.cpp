//============================================================================
// Name        : OOD.cpp
// Author      : petersil
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <mutex>
#include <atomic>
#include <vector>

#include "AbstractFactory.h"
#include "Builder.h"
#include "ChainOfResponsibility.h"
#include "FactoryMethod.h"
#include "Observer.h"
#include "Singleton.h"
#include "State.h"
#include "Strategy.h"
#include "TemplateMethod.h"
#include "Adapter.h"

using namespace std;

//Adapter

//Command

//Decorator

//Proxy




int main() {
	singleton_test();
	factory_method_test();
	abstract_factory_test();
	observer_test();
	test_cor();
	test_builder();
	test_state();
	test_tm();
	test_strategy();
	test_adapter();
	return 0;
}
