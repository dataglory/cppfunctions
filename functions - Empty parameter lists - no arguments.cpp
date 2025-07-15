//function that takes no arguments
#include <iostream>
using namespace std;

void function1();   //function1 takes no arguments
void function2(void);   //function2 also takes no arguments

int main() {

    function1();
    function2();
}//end main

// function1 uses an empty parameter list to specify that
// the function receives no arguments
void function1() {

    cout << "Function1 takes no arguments." << endl;
}

// function2 uses a void parameter list to specify that
// the function receives no arguments
void function2(void) {
    cout << "Function2 also takes no arguments." << endl;
}
// Created by Talal on 07-Jul-25.
