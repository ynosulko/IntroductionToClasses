#define _USE_MATH_DEFINES

#include "Circle.h"
#include <math.h>
#include <iostream>

using namespace std;

Circle::Circle(){}

Circle::Circle(double rad)
{
    radius = rad;
}

void Circle::setRadius(double length)
{
    radius = length;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::calculateCircleLentgh()
{
    double lngt = 2 * M_PI * radius;
    return lngt;
}

double Circle::calculateCircleSquare()
{
    double sqr = M_PI * pow(radius, 2);
    return sqr;
}

void Circle::promptValues()
{
    cout << "Enter Circle radius lengths. Hit Enter to submit the value" << endl;
    int r;
    cin >> r;
    setRadius(r);
}