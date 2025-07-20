/*
* (Rounding Numbers) An application of function floor is rounding a value to the nearest  integer.
* The statement
* y = floor( x + 0.5 );
* rounds the number x to the nearest integer and assigns the result to y.
* Write a program that reads several numbers and uses the preceding statement to round each of these numbers to the nearest integer.
* For each number processed, print both the original number and the rounded number.
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 double number;
 cout << "Enter numbers to round (non-numeric input to quit): " << endl;
 while (cin >> number) {
  int rounded = floor (number + 0.5);
  cout << fixed << setprecision(2);
  cout << "Original: " << setw(8) << number;
  cout << "\tRounded: " << rounded << endl;
 }
 return 0;
}
// Created by Talal on 20-Jul-25.