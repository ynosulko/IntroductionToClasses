#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(){}

Rectangle::Rectangle(double s1, double s2)
{
    side1 = s1;
    side2 = s2;
}

void Rectangle::setFirstSideLength(double length)
{
    side1 = length;
}

double Rectangle::getFirstSideLength()
{
    return side1;
}

void Rectangle::setSecondSideLength(double length)
{
    side2 = length;
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

void Rectangle::promptValues()
{
    cout << "Enter 2 side lengths of the Rectangle. Hit Enter to submit each value" << endl;
    int s1, s2;
    cin >> s1 >> s2;
    setFirstSideLength(s1);
    setSecondSideLength(s2);
}
