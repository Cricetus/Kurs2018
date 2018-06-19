#pragma once
#include "Object.h"
#include "Person.h"
class Electrician :
	public Person
{
	Object& object;
public:
	Electrician();
	virtual ~Electrician();
};

