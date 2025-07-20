//demonstrating math functions results
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << "\ndemonstrating math function results: " << endl;
    cout << fixed << setprecision(2);

    double x = 0;

    x = fabs(7.5);
    cout << "x = fabs(7.5) = " << x << endl;

    //round x
    x = floor(7.5);
    cout << "x = floor(7.5) = " << x << endl;

    x = fabs(0.0);
    cout << "x = fabs(0.0) = " << x << endl;

    x = ceil(0.0);
    cout << "x = ceil(0.0) = " << x << endl;

    x = fabs(-6.4);
    cout << "x = fabs(-6.4) = " << x << endl;

    x = ceil(-6.4);
    cout << "x = ceil(-6.4) = " << x << endl;

    x = ceil( - fabs( -8 + floor(-5.5)));
    cout << "x = ceil(-fabs(-8 + floor(-5.5))) = " << x << endl;

}
// Created by Talal on 20-Jul-25.