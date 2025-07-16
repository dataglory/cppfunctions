//recursive function factorial
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial (unsigned long);    //function prototype
int main() {
    //calculate the factorials of 0 through 10
    for (unsigned int i = 0; i<=10; ++i)
        cout << setw(2)<< i << "! = " << factorial (i)
            <<endl;
}//end main

//recursive definition of function factorial
unsigned long factorial (unsigned long number) {
    if (number <=1 )    //test for base case
        return 1;   //base cases: 0! =1 and 1! = 1
    else //recursion step
        return number * factorial (number - 1);
}//end function factorial
// Created by Talal on 16-Jul-25.