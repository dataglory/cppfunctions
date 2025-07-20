/*
* (Rounding Numbers) Function floor can be used to round a number to a specific decimal place.
* The statement
* y = floor( x * 10 + 0.5 ) / 10;
* rounds x to the tenths position (the first position to the right of the decimal point).
* The statement
* y = floor( x * 100 + 0.5 ) / 100;
* rounds x to the hundredths position (the second position to the right of the decimal point).
* Write a program that defines four functions to round a number x in various ways:
* a) roundToInteger( number )
* b) roundToTenths( number )
* c) roundToHundredths( number )
* d) roundToThousandths( number )
* For each value read, your program should print the original value, the number rounded to the nearest integer,
* the number rounded to the nearest tenth, the number rounded to the nearest hundredth and the number rounded to the nearest thousandth.
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//func prototypes
double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreds(double number);
double roundToThousands(double number);

int main() {
 double number;

 //read number until invalid input or EOF
 while (cout << "Enter a number (non-numeric to quit): " && cin >> number) {

 //print table header
 cout << left << setw(15) << "Original"
  << setw(15) << "Integer"
  << setw(15) << "Tenths"
  << setw(15) << "Hundreds"
  << setw(15) << "Thousands" << endl;

  //output original number with 5 decimal places
  cout << fixed << setprecision(5);
  cout << left << setw(15) << number;

  //output rounded values with respective precisions
  cout << fixed << setprecision(0) << left << setw(15) << roundToInteger ( number);
  cout << fixed << setprecision(1) << left << setw(15) << roundToTenths(number);
  cout << fixed << setprecision(2) << left << setw(15) << roundToHundreds(number);
  cout << fixed << setprecision(3) << left << setw(15) << roundToThousands(number) << endl;
 } // end while
}//end main

//round to nearest integer
double roundToInteger(double number) {
 return floor ( number + 0.5);
}

//round to nearest tenth
double roundToTenths(double number) {
 return floor (number * 10 + 0.5) / 10;
}

//round to nearest hundredth
double roundToHundreds(double number) {
 return floor ( number * 100 + 0.5) / 100;
}

//round to nearest thousandth
double roundToThousands(double number) {
 return floor ( number * 1000 + 0.5) / 1000;
}
// Created by Talal on 20-Jul-25.