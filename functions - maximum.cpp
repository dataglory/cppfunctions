//function template "function - maximum.h" test program
#include <iostream>
#include "function - maximum.h" //included function of function template maximum
using namespace std;
int main() {
    //demonstrate maximum with int values
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    //invoke int version of maximum
    cout << "The maximum integer value is: "
        << maximum(int1, int2, int3) << endl;

    //demonstrate maximum with double values
    double double1, double2, double3;

    cout << "Input three double values: ";
    cin >> double1 >> double2 >> double3;

    //invoke double version of maximum
    cout << "The maximum double value is: "
        << maximum(double1, double2, double3)<< endl;

    //demonstrate maximum with char values
    char char1, char2, char3;

    cout << "Input three char values: ";
    cin >> char1 >> char2 >> char3;

    //invoke char version of maximum
    cout << "The maximum of char value is: "
       << maximum(char1, char2, char3)<< endl;
}//end main
// Created by Talal on 16-Jul-25.