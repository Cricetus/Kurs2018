#include "stdafx.h"
#include "Person.h"


Person::Person() :firstName("Rashkov"),
lastName("George"),
age(18),
height(180),
weight(65),
_gender(male)
{}

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
