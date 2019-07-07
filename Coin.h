#pragma once
#include <iostream>
#include <string>


using namespace std;



#ifndef COIN_H   
#define COIN_H




class Coin   //coin class definition
{
private:
	string sideUp;   //holds head or tail situation of the coin

public:


	Coin();   //default constructor

	void toss();  //tossing function

	string getSideUp();  //return head or tail (sideUp variable)

	void headOrTail();   // tossing function to use in toss fucntion and in constructor

};
#endif // !COIN
