//unary scope resolution operator
#include <iostream>
using namespace std;

int number = 7; //global variable named number

int main() {
    double number = 10.5;   //local var named number

    //display values of local and global var
    cout << "Local double value of number = " << number
        << "\nGlobal int value of number = " << ::number << endl;
}//end main
// Created by Talal on 09-Jul-25.