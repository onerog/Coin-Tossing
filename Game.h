#pragma once

#include <iostream>

using namespace std;

#ifndef GAME_H
#define GAME_H

class Game  //game class definition to hold balance
{

private:
	double balance;  //holds balance
	int hand;        // holds hand
public:

	Game(); //default constructor

	void addBalance(double); //adds valur to balance

	void nextHand(); // increase hand variable by 1 to count current hand

	int getHand(); // returns current hand

	double getBalance(); //returns balance


};

#endif // !GAME_H
