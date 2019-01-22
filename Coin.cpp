//----------------------------------------------------------
//  Name: Waylon Wu
//  E-mail Address: wiw5145@psu.edu
//  Class: CMPSC 121
//  Homework #8
//  Due Date: 12/7/16
//  Brief Project Description: Coin Toss Simulator
//----------------------------------------------------------

#include <iostream>
#include <ctime>
#include "Coin.h"
using namespace std;

//  Constructor assigns a string to the sideUp member
Coin::Coin() {
    toss();
}

//  toss fonction flips the coin 20 times randomly
void Coin::toss() {
    
    int flip = (rand() % 2);
    if (flip == 0) {
        sideUp = "heads";
    } else {
        sideUp = "tails";
    }
}

//  getSideUp returns the coin face
string Coin::getSideUp() {
    return sideUp;
}
