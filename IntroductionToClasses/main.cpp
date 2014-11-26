#include <iostream>
#include "Menu.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
int printFigureTypePrompt();
int printCalculationPrompt();

using namespace std;

int main(int argc, const char * argv[])
{
    int figure, calc;
    Menu * menu = new Menu();
    menu->printFigurePrompt();
    figure = menu->captureFigureChoise();
    if (1 == figure)
    {
        Triangle * tri = new Triangle();
        tri->promptValues();
        menu->printCalculationPrompt();
        calc = menu->captureCalulationChoise();
    }
    else if (2 == figure)
    {
        Rectangle * rect = new Rectangle();
        rect->promptValues();
        menu->printCalculationPrompt();
        calc = menu->captureCalulationChoise();
    }
    else
    {
        Circle * circ = new Circle();
        circ->promptValues();
        menu->printCalculationPrompt();
        calc = menu->captureCalulationChoise();
    }

    return 0;
}