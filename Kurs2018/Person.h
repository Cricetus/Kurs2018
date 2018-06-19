#pragma once

#include <iostream>
#include <string>

#include "gender.h"
using std::cin;
using std::cout;
using std::string;


class Person
{
	string firstName;
	string lastName;
	int age;
	int height;
	int weight;
	gender g;
	
public:
	Person();
	bool IsAdult();
	bool IsLean();
	virtual ~Person();
};

