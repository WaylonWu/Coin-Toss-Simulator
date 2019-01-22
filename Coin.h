//----------------------------------------------------------
//  Name: Waylon Wu
//  E-mail Address: wiw5145@psu.edu
//  Class: CMPSC 121
//  Homework #8
//  Due Date: 12/7/16
//  Brief Project Description: Coin Toss Simulator
//----------------------------------------------------------

using namespace std;
#ifndef Coin_h
#define Coin_h

//  Coin class declaration
class Coin {
    
private:
    string sideUp;
public:
    Coin();
    void toss();
    string getSideUp();
};

#endif /* Coin_h */
