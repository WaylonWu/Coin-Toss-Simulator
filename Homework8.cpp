//----------------------------------------------------------
//  Name: Waylon Wu
//  E-mail Address: wiw5145@psu.edu
//  Class: CMPSC 121
//  Homework #8
//  Due Date: 12/7/16
//  Brief Project Description: Coin Toss Simulator
//----------------------------------------------------------

#include <iostream>
#include "Coin.h"
using namespace std;

int main() {
    
    Coin side;      //  Define an instance of the Coin class
    string face;    //  local string for face
    srand((int)time(0));
    
    //  Describes to the user what the program does
    cout << "This program simulates a coin filp.\n"
        << "The coin will be fliped 20 times.\n";
    
    //  Initial side facing up
    side.toss();
    cout << "The initial side facing up is: " << side.getSideUp() << endl;
    
    //  Calls the functions in Coin.cpp
    int headCount = 0;
    for(int i = 0; i < 20; i++) {
        
        side.toss();
        
        cout << "Toss " << i+1 << ": " << side.getSideUp() << endl;
        
        if("heads" == side.getSideUp())
            headCount++;
    }
    
    //  Displays amount of heads and tails
    cout << "Heads: " << headCount << endl;
    cout << "Tails: " << 20 - headCount << endl;
    
    return 0;
}
