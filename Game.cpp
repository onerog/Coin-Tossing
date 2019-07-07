#include <iostream>
#include "game.h"
using namespace std;

Game::Game() //default constructor sets balance to 0.0 and hand counter to 1
{
	balance = 0.0;
	hand = 1;
}

void Game::addBalance(double b) // function adds value to balance
{
	balance += b;
}

void Game::nextHand()
{
	hand++;
}

int Game::getHand()
{
	return hand;
}

double Game::getBalance() //function returns balance
{
	return balance;
}