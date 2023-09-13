/* 
guessing_games.cpp
Abdu-Daiyaan Jattiem
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

void higherOrLower();
void rockPaperScissors();
void numOfFingers();


int main()
{
	srand(time(NULL));
	int choice;

	do
	{
		cout << "Guessing Games:\n";
		cout << "------------------------\n";
		cout << "1. Play Higher or Lower\n";
		cout << "2. Play Paper-Scissors-Rock\n";
		cout << "3. Play guess the number of fingers\n";
		cout << "4. Quit\n";
		cout << "------------------------\n\n";
		cout << "Enter Here: "; cin >> choice; cout << endl;

		switch (choice)
		{
		case 1:
			higherOrLower();
			break;
		case 2:
			rockPaperScissors();
			break;
		case 3:
			numOfFingers();
			break;
		case 4:
			cout << "Quiting application...\n";
			break;
		default:
			cout << "Invalid Selection! Please select a game from 1 to 3 or press 4 to quit the application\n\n";
			break;
		} 		
	} 
	while (choice != 4);
	
}

void higherOrLower()
{

	char guess;
	char h, l;

	int num1 = rand() % 20 + 1;
	int num2 = rand() % 20 + 1;

	cout << "Welcome to Higher or Lower\n";
	cout << "The first number is: " << num1 << endl;
	cout << "The second number is hidden. Guess if the second number is higher or lower than the first number\n";
	cout << "Enter H or L\n";
	cout << "Enter Here: "; cin >> guess;

	switch (guess)
	{
	case 'H':
	case 'h':
		if (num2 > num1)
		{
			cout << "YOU WIN! The hidden number was: " << num2 << endl;
		}
		else (cout << "You Lose. The hidden number was: " << num2 << endl);
		break;
	case 'L':
	case 'l':
		if (num2 < num1)
		{
			cout << "YOU WIN! The hidden number was: " << num2 << endl;
		}
		else (cout << "You Lose. The hidden number was: " << num2 << endl);
		break;
	default:
		cout << endl << guess << " is an invalid input please restart and enter either H or L\n\n";
		break;
	}
}

void rockPaperScissors()
{

	int computer = rand() % 3 + 1;
	char choice;

	cout << "Welcome to Rock-Paper-Scissors\n";
	cout << "I have chosen either scissors, rock or paper\n";
	cout << "Choose your weapon\n";
	cout << "Type either a P for paper, S for scissors or R for rock\n";
	cout << "Enter Here: "; cin >> choice;

	switch (choice)
	{
	case 'r':
		if (computer == 1)
		{
			cout << "You Lose. Paper Suffocates Rock ;) \n";
		}
		else if (computer == 2)
		{
			cout << "YOU WIN! according to the rules, Rock Apparently Beats my Sciccors -_- \n";
		}
		else(cout << "It's a Tie. Rock cannot beat Rock\n");
		break;

	case 'p':
		if (computer == 2)
		{
			cout << "You Lose. Scissors Shreds Paper my friend. -.-snip, snip, snip\n";
		}
		else if (computer == 3)
		{
			cout << "YOU WIN! Paper suffocates Rock, but I let you win ;)\n";
		}
		else (cout << "It's a Tie. Paper cannot beat Paper\n");
		break;

	case 's':
		if (computer == 1)
		{
			cout << "Did you see that? I just crushed you like a rock crushes scissors;)\n";
		}
		else if (computer == 2)
		{
			cout << "YOU WIN! I chose paper, but your Scissors is blunt *_*";
		}
		else(cout << "It is a Tie. Scissors cannot beat Sccissors. or can it *.*?\n");
		break;

	default:
		cout << "Incorrect Selection! Please type either a P for paper, S for scissors or R for rock\n";
	}
}

void numOfFingers()
{
	int numOfFingers = rand() % 5 + 1;
	int guess;

	cout << "Welcome to Guess the Number of Fingers\n";
	cout << "My hand is hiding a number of fingers\n";
	cout << "Guess the number of fingers that I am hiding\n";
	cout << "Enter Here: "; cin >> guess;

	if (guess == numOfFingers)
	{
		cout << "Good Guess! I hid " << numOfFingers << " finger(s)\n";
	}
	else (cout << "You were close but not right. I hid " << numOfFingers << " fingers\n");
}