//testing math library functions
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed<< setprecision(6);
    cout << "Testing Math Library Functions: \n\n";

    //sqrt function test
    cout << "sq root function test: " << endl;
    cout << "sqrt(900.0) = " << sqrt(900.0) << endl;
    cout << "sqrt(9.0) = " << sqrt(9.0) << endl;
    cout << endl;

    //exp function test
    cout << "exponential function test: " << endl;
    cout << "exp(1.0) = " << exp(1.0) << endl;
    cout << "exp(2.0) = " << exp(2.0) << endl;
    cout << endl;

    //log function (natural logarithm)
    cout << "log function test: " << endl;
    cout << "log(2.78282) = " << log(2.78282) << endl;
    cout << "log(7.389050) = " << log(7.389050) << endl;
    cout << endl;

    //log(10) function (base-10 logarithm) test
    cout << "log10 function test: " << endl;
    cout << "log10(1.0) = " << log10(1.0) << endl;
    cout << "log10(10.0) = " << log10(10.0) << endl;
    cout << "log10(100.0) = " << log10(100.0) << endl;
    cout << endl;

    //fabs function (absolute value for floating point) test
    cout <<"fabs  function test: " << endl;
    cout << "fabs(13.5) = " << fabs(13.5) << endl;
    cout << "fabs(0.0) = " << fabs(0.0) << endl;
    cout << "fabs(-13.5) = " << fabs(-13.5) << endl;
    cout << endl;

    //ceil and floor function (to perform proper rounding) test
    cout <<"ceil and round function test: " << endl;
    cout << "ceil(30.37) = " << ceil(30.37) << endl;
    cout << "floor(-9.8) = " << floor(-9.8) << endl;
    cout << endl;

    //pow function (power) test
    cout << "power function test: " << endl;
    cout << "pow(2.0, 9.0) = " << pow(2.0,9.0) << endl;
    cout << endl;

    //fmod function (floating point remainder) test
    cout << "floating point remainder function test: " << endl;
    cout << "fmod(13.657, 2.333) = " << fmod(13.657, 2.333) << endl;
    cout << endl;

    //trig function test
    cout << "trigonometric functions test: " << endl;
    cout << "sin(0.0) = " << sin(0.0) << endl;
    cout << "cos(0.0) = " << cos(0.0) << endl;
    cout << "tan(0.0) = " << tan(0.0) << endl;
    cout << endl;

    cout << "all math library functions tested successfully!" << endl;

    return 0;
}
// Created by Talal on 19-Jul-25.