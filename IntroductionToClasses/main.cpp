#include <iostream>
#include "Triangle.h"
int printFigureTypePrompt();
int printCalculationPrompt();

using namespace std;

int main(int argc, const char * argv[]) {

    int figure = 0;
    int calculationType = 0;
    double calculationResult = 0;
    
    figure = printFigureTypePrompt();
    if (1 == figure) {
        double s1, s2, s3;
        cout << "Specify 3 sides of the Triangle. Hit Enter to submit each value" << endl;
        cin >> s1 >> s2 >> s3;
        Triangle * tri = new Triangle(s1, s2, s3);
        calculationType = printCalculationPrompt();
        if (1 == calculationType)
        {
            calculationResult = tri->calculateTrianglePerimeter();
            delete tri;
            return calculationResult;
        }
        else
        {
            calculationResult = tri->calculateTriangleSquare();
            delete tri;
            return calculationResult;
        }
    }
    
    return 0;
}

int printFigureTypePrompt()
{
    cout << "Type 1 to create Triangle, 2 - Rectangle and 3 - Circle" << endl;
    int choise;
    cin >> choise;
    if(choise != 1 && choise != 2 && choise != 3)
        cout << "You entered wrong number!";
    return choise;
}

int printCalculationPrompt()
{
    cout << "Type 1 to calculate Perimeter, 2 - Square" << endl;
    int choise;
    cin >> choise;
    if(choise != 1 || choise != 2)
        cout << "You entered wrong number!";
    return choise;
}