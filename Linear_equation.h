#pragma once
#include "Equation.h"

class Linear_equation : public Equation
{
	double a, b;
public:
	Linear_equation(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
	void equationSolve() override
	{
		if (a)
		{
			cout << endl << "The root of the linear equation is: " << a << "x + " << b << " = 0 is x = " << -b / a << endl;
		}
		else if (!a && b)
		{
			cout << endl << "A linear equation has no roots..." << endl;
		}
		else
		{
			cout << endl << "there are an infinite number of roots..." << endl;
		}
	}

};

