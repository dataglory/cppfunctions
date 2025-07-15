//inline function that calculates th volume of a cube
#include <iostream>
using namespace std;

//definition of inline function cube. def of func appears
//before func is called, so a func prototype is not required.
//first line of func def acts as the prototype.
inline double cube(const double side) {
    return side * side * side;  //calculate cube
}
int main() {
    double sideValue;   //stores value entered by user
    cout << "Enter the side lenght of your cube: ";
    cin >> sideValue;

    //calculate the cube of sideValue and display result
    cout << "Volume of cube with side "
        << sideValue << " is " << cube(sideValue) << endl;
}//end main
// Created by Talal on 07-Jul-25.