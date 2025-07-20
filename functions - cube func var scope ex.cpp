/*For the cube program below, state the scope (either function scope, global namespace
scope, block scope or function-prototype scope) of each of the following elements:
a) The variable x in main.
b) The variable y in cube.
c) The function cube.
d) The function main.
e) The function prototype for cube.
f) The identifier y in the function prototype for cube.
**/
#include <iostream>
using namespace std;

int cube(int y);    //func prototype

int main() {
    int x = 0;

    for (x = 1; x <= 10; x++)   //loop 10 times
        cout << cube(x) << endl;    //calc cube of x and output results
}//end main

//definition of func cube
int cube(int y) {
    return y * y * y;
}//end func cube
// Created by Talal on 19-Jul-25.


//answer:
/*
 * x in main → Block scope
 * y in cube → Block scope
 * function cube → Global namespace scope
 * function main → Global namespace scope
 * function prototype for cube → Global namespace scope
 * identifier y → Function prototype scope
 */