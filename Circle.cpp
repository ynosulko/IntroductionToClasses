#define _USE_MATH_DEFINES

#include "Circle.h"
#include <math.h>

Circle::Circle(double rad)
{
    radius = rad;
}

double Circle::setRadius(double length)
{
    return radius = length;
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