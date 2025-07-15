/* One of the most popular games of chance is a dice game known as “craps,” which is played
in casinos and back alleys worldwide. The rules of the game are straightforward:
A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5 and 6
spots. After the dice have come to rest, the sum of the spots on the two upward faces is
calculated. If the sum is 7 or 11 on the first roll, the player wins. If the sum is 2, 3 or
12 on the first roll (called “craps”), the player loses (i.e., the “house” wins). If the sum
is 4, 5, 6, 8, 9 or 10 on the first roll, then that sum becomes the player’s “point.” To
win, you must continue rolling the dice until you “make your point.” The player loses
by rolling a 7 before making the point. */



//game of change dice game "craps"

#include <iostream>
#include <cstdlib>  //contains prototypes for functions srand and rand
#include <ctime>    //contains prototypes for function time
using namespace std;

unsigned int rollDice();    //rolls dice, calculates and displays sum

int main() {
    //enumeration with constants that represent the game status
    enum Status {CONTINUE, WON, LOST};  //all caps in constants

    //randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    unsigned int myPoint = 0;   //point if no win or loss on first roll
    Status gameStatus = CONTINUE;   //can contain CONTINUE, WON or LOST
    unsigned int sumOfDice = rollDice();    //first roll of the dice

    //determine game status and point (if needed) based on first roll
    switch (sumOfDice) {
        case 7:     //win with 7 on first roll
        case 11:    //win with 11 on first roll
            gameStatus = WON;
            break;
        case 2:     //lose with 2 on first roll
        case 3:     //lose with 3 on first roll
        case 12:    //lose with 12 on first roll
            gameStatus = LOST;
            break;
        default:    //did not win or lost, so remember point
            gameStatus = CONTINUE;  //game is not over
            myPoint = sumOfDice;    //remember the point
            cout << "Point is " << myPoint<< endl;
            break;
    }//end switch

    //while game is not complete
    while (CONTINUE == gameStatus)  //not WON or LOST
    {
        sumOfDice = rollDice(); //roll dice again

        //determine game status
        if (sumOfDice == myPoint)   //win by making point
            gameStatus = WON;
        else
            if (sumOfDice == 7) //lose by rolling 7 before point
                gameStatus = LOST;
    }// end while

    //display won or lost message
    if (WON == gameStatus)
        cout << "Player wins" << endl;
    else
        cout << "Player loses" << endl;
}//end main

//roll dice, calculate sum and display results
unsigned int rollDice() {

    //pick random die values
    unsigned int die1 = 1 + rand() % 6; //first die roll
    unsigned int die2 = 1 + rand() % 6; //second die roll

    unsigned int sum = die1 + die2; //compute sum of die values

    //display results of this roll
    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
    return sum; //end function roll dice
}
// Created by Talal on 06-Jul-25.
