/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Conroy Ricketts
 */

#include <iostream>
#include <math.h>

using namespace std;

void compute(double a, double b, double c)
{
    double radicand = (b * b) - (4 * a * c);

    if(radicand < 0)
    {
        cout << "Computation failed because the radicand is less than zero.";
    }
    else
    {
        double x1 = (-b + sqrt(radicand)) / (2 * a);
        double x2 = (-b - sqrt(radicand)) / (2 * a);
        cout << "x1 is " << x1 << " and x2 is " << x2 << "!";
    }
}