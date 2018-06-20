#pragma once

#include <vector>
#include "Electrician.h"


using std::vector;

class Object
{
	unsigned int req_exp;
	unsigned int req_rank;
	vector <Electrician> CL;
	vector <Electrician> workers;

public:
	Object();
	bool IsPresentInCL(const Electrician& e);
	void ProspectivesOverview()const;
	bool ReceiveCV(const Electrician& e);
	bool Hire(const Electrician& e);
	void Fire(const Electrician& e);
	~Object();
};

