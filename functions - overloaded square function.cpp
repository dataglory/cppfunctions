// overloaded square function
#include <iostream>
using namespace std;

//function square for int value
int square (int x){
    cout << "square of integer " << x << " is ";
    return x * x;
}//end func sq with int argument

//function square for double value
double square (double y )
{
    cout << "square of double " << y << " is ";
    return y * y;
}//end func sq with double arg

int main(){
    cout << square(7);    //calls int version
    cout << endl;
    cout << square(7.5);  //calls double version
    cout << endl;
}//end main
// Created by Talal on 16-Jul-25.