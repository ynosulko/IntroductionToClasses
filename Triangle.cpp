#include "Triangle.h"
#include <math.h>

Triangle::Triangle(double s1, double s2, double s3)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

double Triangle::setFirstSideLength(double length)
{
    return side1 = length;
}

double Triangle::getFirstSideLength()
{
    return side1;
}

double Triangle::setSecondSideLength(double length)
{
    return side2 = length;
}

double Triangle::getSecondSideLength()
{
    return side2;
}

double Triangle::setThirdSideLength(double length)
{
    return side3 = length;
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

