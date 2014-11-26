#include "Triangle.h"
#include <math.h>
#include <iostream>

using namespace std;

Triangle::Triangle(){}

Triangle::Triangle(double s1, double s2, double s3)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

void Triangle::setFirstSideLength(double length)
{
    side1 = length;
}

double Triangle::getFirstSideLength()
{
    return side1;
}

void Triangle::setSecondSideLength(double length)
{
    side2 = length;
}

double Triangle::getSecondSideLength()
{
    return side2;
}

void Triangle::setThirdSideLength(double length)
{
    side3 = length;
}

double Triangle::getThirdSideLength()
{
    return side3;
}

double Triangle::calculateTrianglePerimeter()
{
    double perim = side1 + side2 + side3;
    return perim;
}

double Triangle::calculateTriangleSquare()
{
    double perim = calculateTrianglePerimeter();
    double sqr = sqrt(perim * (perim - side1) * (perim - side2) * (perim - side3));
    return sqr;
}

void Triangle::promptValues()
{
    cout << "Enter 3 side lengths of the Triangle. Hit Enter to submit each value" << endl;
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    setFirstSideLength(s1);
    setSecondSideLength(s2);
    setThirdSideLength(s3);
}

