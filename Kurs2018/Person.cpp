#include "stdafx.h"
#include "Person.h"


Person::Person()
{
}

bool Person::IsAdult()
{
	
	return ((age > 18) ? true:false);
}

bool Person::IsLean()
{
	return ((weight < 50) ? true : false);
}


Person::~Person()
{
}
