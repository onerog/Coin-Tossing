#include <iostream>
#include <cctype> // for testing characters
#include <cstdlib> //for tolower() function
#include "coin.h"
#include "game.h"
using namespace std;

int main()
{

	cout << "Welcome to coin tossing game \n";
	cout << "In this game, a quarter, a dime, and a nickel\n";
	cout << "are tossed simultaneously and you get the value\n";
	cout << "of the coin added to your balance if it heads-up\n";
	cout << "You win the game if your balance is exactly $1\n";
	cout << "If your balance exceeds $1, you lose the game\n";

	int choice = 0; // holds user choice
	char again; //holds user choice to play the game again

	cout << "Enter 1 to start coin tossing game. \n";

	cin >> choice; //gets user choice to start game


	if (choice == 1) // if user wants to play, game starts
	{
		do {   //game starts by tossing three coins simultaneously

			Coin quarter; //quarter object
			Coin dime;   //dime object
			Coin nickel;  //nickel object
			Game Game1;  // game object to hold balance and hand

			do {


				cout << endl << Game1.getHand() << ". hand results : " << endl;

				if (quarter.getSideUp() == "head")  //gets tossing result and adds value to balance if heads-up
					Game1.addBalance(0.25);         //adds value to balance if heads-up
				cout << "quarter : " << quarter.getSideUp() << endl;   //shows tossing result

				if (nickel.getSideUp() == "head")  //gets tossing result and adds value to balance if heads-up
					Game1.addBalance(0.10);         //adds value to balance if heads-up
				cout << "nickel : " << nickel.getSideUp() << endl;  //shows tossing result

				if (dime.getSideUp() == "head")   //gets tossing result and adds value to balance if heads-up
					Game1.addBalance(0.05);          //adds value to balance if heads-up
				cout << "dime : " << dime.getSideUp() << endl;   //shows tossing result




				cout << endl << Game1.getHand() << ". hand balance = " << Game1.getBalance() << endl; //shows current hand balance

				quarter.toss();   //toss quarter
				dime.toss();      //toss dime
				nickel.toss();    //toss nickel
				Game1.nextHand(); //increase hand by 1 



			} while (Game1.getBalance() < 1.00);  // game ends when balance reaches $1

			if (Game1.getBalance() == 1.00)   //to show win or lose message
				cout << "you won :) :)" << endl;

			else
				cout << "you lost :(( but you can try again :) " << endl;


			cout << "do you want to play again? enter y or n \n" << endl;

			cin >> again;  // get user choice to play again

			while (tolower(again) != 'y' && tolower(again) != 'n')
			{
				cout << "wrong entry. enter y or n " << endl;
				cin >> again;
			}

			if (tolower(again) == 'y')  // shows message
				cout << "======  playing again ======= \n";

		} while (tolower(again) == 'y');  // game starts again if user enters y

		cout << "--------closing program---------";
		return 0;
	}

	else
		return 0;
}