#pragma once
#include <iostream>

using namespace std;

class Equation
{
public:
	Equation() { cout << endl << "Equation constr"; }
	~Equation() { cout << "Equation destruct" << endl; }
	virtual void equationSolve() = 0;

};

