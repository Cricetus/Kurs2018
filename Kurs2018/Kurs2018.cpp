// Kurs2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "Electrician.h"
#include "Object.h"



int main()
{
	Object o;
	Electrician e;
	cout << e.GetName() << endl;
	e.ChangeObject(&o);
    return 0;
}

