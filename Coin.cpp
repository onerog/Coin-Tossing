#include <iostream>
#include <random>  // for random number generator
#include "coin.h"

using namespace std;

Coin::Coin() //default constructor does first simultaneous tossing
{
	headOrTail();
}

void Coin::toss() //tossing function
{
	headOrTail();
}

string Coin::getSideUp() //returns sideUp variable
{
	return sideUp;
}


void Coin::headOrTail()
{
	int r = 0;

	// random number generator
	random_device rd;   // non-deterministic generator
	mt19937 gen(rd());  // to seed mersenne twister.
	uniform_int_distribution<> dist(1, 2); // distribute results between 1 and 2 inclusive.

	r = dist(gen);

	if (r == 1)
		sideUp = "head";
	else
		sideUp = "tail";
}