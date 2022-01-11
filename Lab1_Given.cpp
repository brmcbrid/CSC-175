#include <iostream>

using namespace std;

//Program to find the area of a right triangle

int main()
{
    double area;
    int side1, side2;
    //Declaration of variables

    cout << "CSC 175\nLab1\nArea of Triangle Calculator\n\n";
    //print header

    cout << "Enter the length of side 1: ";
    cin << side1;
    cout << "Enter the length of side 2: ";
    cin << side2;
    //collection of user input

    area = (side1)(side2)/2;
    \\calculation of area

    cout.precision(2);
    cout << "\nThe area of the right triangle is " << area << " square inches.\n\n"
    //output of results to console screen

    //system("pause");
    //hold screen before termination
    return 0;
}
