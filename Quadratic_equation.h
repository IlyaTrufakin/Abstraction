#pragma once
#include "Equation.h"

class Quadratic_equation : public Equation
{
	double a, b, c;
public:
	Quadratic_equation(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void equationSolve() override
	{
		double discriminant = pow(b, 2) - 4 * a * c;
		if (discriminant > 0)
		{
			cout << endl << "There are 2 roots of a quadratic equation: " << a << "x^2 + " << b << "x + " << c << " = 0 are x1 = " << (-b + sqrt(discriminant)) / (2 * a)
				<< " and x2 = " << (-b - sqrt(discriminant)) / (2 * a) << endl;
		}
		else if (discriminant == 0) {
			cout << endl << "The double root of the quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 is x = " << -b / (2 * a) << endl;
		}
		else {
			cout << endl << "The quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 has no roots." << endl;
		}
	}
};

