/*
*(Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours.
*The garage charges an additional $0.50 per hour for each hour or part thereof in excess of three hours.
*The maximum charge for any given 24-hour period is $10.00.
*Assume that no car parks for longer than 24 hours at a time.
*Write a program that calculates and prints the parking charges for each of three customers who parked their cars in this garage yesterday.
*You should enter the hours parked for each customer.
*Your program should print the results in a neat tabular format and should calculate and print the total of yesterday’s receipts.
*The program should use the function calculateCharges to determine the charge for each customer.
*Your outputs should appear in the following format:

Car	Hours	Charge
1	1.5	2.00
2	4.0	2.50
3	24.0	10.00
TOTAL	29.5	14.5
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function to calculate parking charges based on hours
double calculateCharges(double hours) {
    const double minCharge = 2.00; //minimum charges
    const double hrRate = 0.50; //hourly rate
    const double maxCharge = 10.00; //maximum charges

    if (hours <= 3.0)
        return minCharge;
    else {
        //Calculate additional hours, round up, and add to minimum
        double charge = minCharge + ceil(hours - 3.0 ) * hrRate;
        return (charge > maxCharge) ? maxCharge : charge;
    }
}//end func

int main() {
    double hours1, hours2, hours3;

    //prompt and read hours for car1, 2 and 3
    cout << "Enter hours parked for car 1: ";
    cin >> hours1;
    cout << "Enter hours parked for car 2: ";
    cin >> hours2;
    cout << "Enter hours parked for car 3: ";
    cin >> hours3;

    //calculate charges
    double charge1, charge2, charge3;
    charge1 = calculateCharges(hours1);
    charge2 = calculateCharges(hours2);
    charge3 = calculateCharges(hours3);

    //calculate totals
    double totalHours, totalCharges;
    totalHours = hours1 + hours2 + hours3;
    totalCharges = charge1 + charge2 + charge3;

    //display headers
    cout << fixed << setprecision(2);
    cout << "\nCar\tHours\tCharge\n";

    //display details for each car
    cout << left << setw(5) << "1" << setw(10) << hours1 << charge1 <<endl;
    cout << left << setw(5) << "2" << setw(10) << hours2 << charge2 <<endl;
    cout << left << setw(5) << "3" << setw(10) << hours3 << charge3 <<endl;

    //display totals
    cout << left << setw(5) << "TOTAL" << setw(10) << totalHours << totalCharges << endl;
    return 0;
}//end main
// Created by Talal on 20-Jul-25.