#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::printFigurePrompt()
{
    cout << "Type 1 to create Triangle, 2 - Rectangle and 3 - Circle" << endl;
}

void Menu::printCalculationPrompt()
{
    cout << "Type 1 to calculate Perimeter, 2 - Square" << endl;
}

int Menu::captureFigureChoise()
{
    cin >> figureChoise;
    if(figureChoise != 1 && figureChoise != 2 && figureChoise != 3)
        cout << "The number you entered doen't match any choise!";
    return figureChoise;
}

int Menu::captureCalulationChoise()
{
    cin >> calculationChoise;
    if(calculationChoise != 1 && calculationChoise != 2)
        cout << "The number you entered doen't match any choise!";
    return calculationChoise;
}