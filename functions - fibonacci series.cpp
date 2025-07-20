//recursive function fibonacci
/* can be defined recursively as follows:
fibonacci(0) = 0
fibonacci(1) = 1
fibonacci(n) = fibonacci(n – 1) + fibonacci(n – 2)
*/

#include <iostream>
using namespace std;

unsigned long fibonacci (unsigned long);    //func prototype

int main () {
    //calculate the fibonacci values 0 through 10
    for (unsigned int i = 0; i<=10; ++i)
        cout << "fibonacci(" << i << ") = "
            << fibonacci (i) << endl;
    //displays higher fibonacci values
    cout << "\nfibonacci( 20 ) = " << fibonacci (20 ) << endl;
    cout << "fibonacci( 30 ) = " << fibonacci  (30) <<endl;
    cout << "fibonacci( 35 ) = " << fibonacci (35) << endl;
}

//recursive function fibonacci
unsigned long fibonacci(unsigned long number) {
    if ((0==number) || (1==number))   //base case
        return number;
    else //recursion step
        return fibonacci(number - 1) + fibonacci(number - 2);
}//end func fib
// Created by Talal on 17-Jul-25.