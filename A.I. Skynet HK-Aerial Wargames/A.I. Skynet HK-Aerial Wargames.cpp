// A.I. Skynet HK-Aerial Wargames.cpp : Defines the entry point for the console application.
//these are the libraries.
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	char again = 'y';

	do
	{
		//HUMAN GUESSING.
		//makes sure each time the code is run the random number is different. 
		srand(static_cast<unsigned int>(time(0)));
		// chooses a random number for the enemys posiiton.
		int enemyPlacement = rand() % 64 + 1;
		// keeps track on how many tries it took to find the enemy.
		int hTries = 0;
		int hGuess = 0;
		//displays the start of the program and where the enemy is.
		cout << "Generate Ramdom enemy location on 8x8 grid....\n";
		cout << "The enemy is located is hidden on 8x8 grid with 1-64 sectors.\n";
		cout << "=================================================================\n";
		do
		{
			cout << "Enter a guess: ";
			cin >> hGuess;
			++hTries;
			//checks if guess is lower.
			if (hGuess < enemyPlacement)
			{
				cout << "Human User sending out ping #" << hTries << "\n";
				cout << " The target location prediction of " << hGuess << " was lower than the actual enemy location.\n";
				cout << "=================================================================\n";
			}
			//checks if guess is higher.
			else if (hGuess > enemyPlacement)
			{
				cout << "Human User Radar sending out ping #" << hTries << "\n";
				cout << " The target location prediction of " << hGuess << " was higher than the actual enemy location.\n";
				cout << "=================================================================\n";
			}
			//checks if its not equal then it repeats.	
		} while (hGuess != enemyPlacement);

		//displays results.
		cout << "Human User sending out ping #" << hTries << "\n";
		cout << "Enemy was hiding at location #" << enemyPlacement << ".\n";
		cout << "Target was found at location #" << hGuess << ".\n";
		cout << "Human User took " << hTries << " predictions to find the enemy location on a grid size of 8x8 (64).\n";
		cout << "=================================================================\n\n";

		//BINARY GUESSING.
		// keeps track on how many tries it took to find the enemy.
		int tries = 1;
		//starting high number.
		int searchGridHighNumber = 64;
		//starting low number.
		int searchGridLowNumber = 1;
		//calculates a guess to where the enemy is.
		int guess = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		//displays the start of the program and where the enemy is.
		cout << "Generate Ramdom enemy location on 8x8 grid....\n";
		cout << "The enemy is located at location #" << enemyPlacement << " on 8x8 grid with 1-64 sectors.\n";
		cout << "Skynet HK-Aerial Initializing software.....\n";
		cout << "=================================================================\n";
		do
		{
			//checks if guess is lower.
			if (guess < enemyPlacement)
			{
				cout << "Skynet HK-Aerial Radar sending out ping #" << tries << "\n";
				cout << " The target location prediction of " << guess << " was lower than the actual enemy location of " << enemyPlacement << ".\n";
				cout << "The new searchGridLowNumber =" << ++guess << ".\n";
				cout << "=================================================================\n";
				//changes the low number to shorten the gap.
				searchGridLowNumber = ++guess;
				//adds to tries to find out how many tries it took.
				++tries;
				//reruns guess with new values.
				guess = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
			}
			//checks if guess is higher.
			else if (guess > enemyPlacement)
			{
				cout << "Skynet HK-Aerial Radar sending out ping #" << tries << "\n";
				cout << " The target location prediction of " << guess << " was higher than the actual enemy location of " << enemyPlacement << ".\n";
				cout << "The new searchGridHighNumber =" << --guess << ".\n";
				cout << "=================================================================\n";
				//changes the high number to shorten the gap.
				searchGridHighNumber = --guess;
				//adds to tries to find out how many tries it took.
				++tries;
				//reruns guess with new values.
				guess = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
			}
			//checks if its not equal then it repeats.	
		} while (guess != enemyPlacement);

		//displays results.
		cout << "Skynet HK-Aerial Radar sending out ping #" << tries << "\n";
		cout << "Enemy was hiding at location #" << enemyPlacement << ".\n";
		cout << "Target was found at location #" << guess << ".\n";
		cout << "skynet HK-Aerial Software took " << tries << " predictions to find the enemy location on a grid size of 8x8 (64).\n";
		cout << "=================================================================\n\n";

		//RANDOM GUESSING.
		// keeps track on how many tries it took to find the enemy.
		int rTries = 1;
		//calculates a guess to where the enemy is.
		int rGuess = rand() % 64 + 1;
		//displays the start of the program and where the enemy is.
		cout << "Generate Ramdom enemy location on 8x8 grid....\n";
		cout << "The enemy is located at location #" << enemyPlacement << " on 8x8 grid with 1-64 sectors.\n";
		cout << "Skynet HK-Aerial Initializing software.....\n";
		cout << "=================================================================\n";
		do
		{
			//checks if guess is lower.
			if (rGuess < enemyPlacement)
			{
				cout << "Skynet HK-Aerial Radar sending out ping #" << rTries << "\n";
				cout << " The target location prediction of " << rGuess << " was lower than the actual enemy location of " << enemyPlacement << ".\n";
				cout << "=================================================================\n";
				//adds to tries to find out how many tries it took.
				++rTries;
				//reruns guess with new values.
				rGuess = rand() % 64 + 1;
			}
			//checks if guess is higher.
			else if (rGuess > enemyPlacement)
			{
				cout << "Skynet HK-Aerial Radar sending out ping #" << rTries << "\n";
				cout << " The target location prediction of " << rGuess << " was higher than the actual enemy location of " << enemyPlacement << ".\n";
				cout << "=================================================================\n";
				//adds to tries to find out how many tries it took.
				++rTries;
				//reruns guess with new values.
				rGuess = rand() % 64 + 1;
			}
			//checks if its not equal then it repeats.	
		} while (rGuess != enemyPlacement);

		//displays results.
		cout << "Skynet HK-Aerial Radar sending out ping #" << rTries << "\n";
		cout << "Enemy was hiding at location #" << enemyPlacement << ".\n";
		cout << "Target was found at location #" << rGuess << ".\n";
		cout << "skynet HK-Aerial Software took " << rTries << " predictions to find the enemy location on a grid size of 8x8 (64).\n";
		cout << "=================================================================\n\n";

		//LINEAR GUESSING.
		// keeps track on how many tries it took to find the enemy.
		int lTries = 1;
		//starting high number.
		searchGridHighNumber = 64;
		//starting low number.
		searchGridLowNumber = 1;
		//calculates a guess to where the enemy is.
		int lGuess = 1;
		//displays the start of the program and where the enemy is.
		cout << "Generate Ramdom enemy location on 8x8 grid....\n";
		cout << "The enemy is located at location #" << enemyPlacement << " on 8x8 grid with 1-64 sectors.\n";
		cout << "Skynet HK-Aerial Initializing software.....\n";
		cout << "=================================================================\n";
		do
		{
			if (lGuess < enemyPlacement)
				cout << "Skynet HK-Aerial Radar sending out ping #" << lTries << "\n";
			cout << " The target location prediction of " << lGuess << " was lower than the actual enemy location of " << enemyPlacement << ".\n";
			cout << "The new searchGridLowNumber =" << ++lGuess << ".\n";
			cout << "=================================================================\n";
			//adds to tries to find out how many tries it took.
			++lTries;
			//checks if its not equal then it repeats.	
		} while (lGuess != enemyPlacement);

		//displays results.
		cout << "Skynet HK-Aerial Radar sending out ping #" << lTries << "\n";
		cout << "Enemy was hiding at location #" << enemyPlacement << ".\n";
		cout << "Target was found at location #" << lGuess << ".\n";
		cout << "skynet HK-Aerial Software took " << lTries << " predictions to find the enemy location on a grid size of 8x8 (64).\n";
		cout << "=================================================================\n\n";
		//displays results for all.
		cout << "**********************************************\n";
		cout << "* All drones have now found the enemy.\n";
		cout << "* The Enemy was hiding at grid location " << enemyPlacement << "\n";
		cout << "*\n";
		cout << "* The Human Player using a human Search took " << hTries <<" guesses to find the enemy location final target prediction was " << enemyPlacement << ".\n";
		cout << "* The AI Player using Linear Search took " << lTries << " guesses to find the enemy location final target prediction was " << enemyPlacement << ".\n";
		cout << "* The AI Player using Random Search took " << rTries << " guesses to find the enemy location final target prediction was " << enemyPlacement << ".\n";
		cout << "* The AI Player using Binary Search took " << tries << " guesses to find the enemy location final target prediction was " << enemyPlacement << ".\n";
		cout << "**********************************************\n\n";
		//asks user to replay.
		cout << "Would you like to play again ? Y / N\n";
		cin >> again;
	}while (again != 'n');
	
	return 0;
}