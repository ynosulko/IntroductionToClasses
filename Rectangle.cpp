#include "Rectangle.h"

Rectangle::Rectangle(double s1, double s2)
{
    side1 = s1;
    side2 = s2;
}

double Rectangle::setFirstSideLength(double length)
{
    return side1 = length;
}

double Rectangle::getFirstSideLength()
{
    return side1;
}

double Rectangle::setSecondSideLength(double length)
{
    return side2 = length;
}

double Rectangle::getSecondSideLength()
{
    return side2;
}

double Rectangle::calculateRectanglePerimeter()
{
    double perim = 2 * side1 + 2 * side2;
    return perim;
}

double Rectangle::calculateRectangleSquare()
{
    double sqr = side1 * side2;
    return sqr;
}