#pragma once
#include "Person.h"
#include "Object.h"
class Worker :
	public Person
{
	Object& factory;
	string level;
	int payment;
public:
	Worker();
	virtual ~Worker();
};

