//using default arguments
#include <iostream>
using namespace std;

//function prototype that specifies default arguments
unsigned int boxVolume(unsigned int length = 1, unsigned int width = 1, unsigned int height = 1);

int main() {
    //no arguments, only default values for all dimensions
    cout << "The default box volume is: " << boxVolume();

    //specify length
    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 1 and height 1 is: " << boxVolume(10);

    //specify length and width
    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 1 is: " << boxVolume(10,5);

    //specify all arguments
    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 2 is " << boxVolume(10,5,2)
        << endl;
}//end main

//function boxVolume calculates the volume of a box
unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height) {
    return length * width * height;
}//end function boxVolume
// Created by Talal on 08-Jul-25.