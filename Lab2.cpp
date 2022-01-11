#include <iostream>

using namespace std;

int main()
{
    int feet;
    double acres;
    char i;
    //cout << "\n\nEnter the square feet of the area to convert to acres: ";
    cin >> feet;
    acres = feet/43560.0;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << acres;
    //cout <<"\n\n"<<feet<<" square feet is equal to "<<acres <<" acres.\n\n";
    //system("pause");
    return 0;
}
