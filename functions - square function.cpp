//square function use to demonstrate the function
//call stack and activation records
#include <iostream>
using namespace std;

int square(int);   //prototype for function square

int main() {
    int a = 10; //value to square (local automatic variable in main)

    cout << a << " Squared: " << square(a) << endl; //display a squared
}//end main

//returns the square of an integer
// Created by Talal Faiz on 07-Jul-25.
int square(int x) //x is a local variable
{
    return x * x;  //calculate square and return result
}
