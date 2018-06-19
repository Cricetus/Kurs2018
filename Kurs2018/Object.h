#pragma once

#include "Electrician.h"

class Object
{
	unsigned int standing;
	unsigned int rank;
	vector <Electrician> el;

public:
	Object();
	~Object();
};

