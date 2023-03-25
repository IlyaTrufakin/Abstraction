//Створити абстрактний базовий клас з віртуальною функцією — корені рівняння. Створити похідні класи :
//клас лінійних рівнянь і клас квадратних рівнянь.
//Визначити функцію обчислення коренів рівнянь.

#include"Equation.h"
#include"Linear_equation.h"
#include"Quadratic_equation.h"
#include <iostream>

int main()
{
    Equation* equation = nullptr;

    equation = new Linear_equation(2.7, 4.6);
    equation->equationSolve();
    delete equation;

    equation = new Quadratic_equation(1, 1, -2);
    equation->equationSolve();
    delete equation;

    return 0;
}

