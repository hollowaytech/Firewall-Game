// Firewall text game
// Libraries used
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int attempt = 0; // Attempts
	int hints = 0; // Hints used
	cout << "=====FIREWALL=====ACTIVE=====" << endl; // Prints that firewall is active and draws brick wall
	cout << "|      |     |         |    |" << endl;
	cout << "=============================" << endl;
	cout << "|   |       |        |      |" << endl;
	cout << "=============================" << endl;
	cout << "|             |             |" << endl;
	cout << "=============================" << endl << endl;
	cout << "Today, you are tasked to enter" << endl;
	cout << "the correct password to breach" << endl;
	cout << "the active firewall. You will" << endl;
	cout << "have 10 attempts and 3 hints " << endl;
	cout << "if you want to use them. Good luck." << endl << endl;
	cout << "With that being said, enter correct password here: "; // Prompts user to enter password
	string pass; // Password
	cin >> pass;
	cout << endl;
	while (pass != "BWH123" && attempt < 10) // Loops if password isn't correct and less than 10 attempts have been used
	{
		cout << "=====FIREWALL=====ACTIVE=====" << endl;
		cout << "|      |     |         |    |" << endl;
		cout << "=============================" << endl;
		cout << "|   |       |        |      |" << endl;
		cout << "=============================" << endl;
		cout << "|             |             |" << endl;
		cout << "=============================" << endl << endl;
		cout << "=====PASSWORD=====INCORRECT=====" << endl; // Prints that password is incorrect with current stats
		cout << "|Attempts Done: " << attempt << "|" << endl;
		attempt++;
		cout << "|Hints Used: " << hints << "|" << endl;
		cout << "|Current Password Entered: " << pass << "|" << endl;
		cout << "================================" << endl << endl;
		if (hints == 3) // Prints alternate text if hints run out
		{
			cout << "You have ran out of hints." << endl << endl;
		}
		else
		{
			cout << "Would you like to use a hint? Enter 'Y' if yes and any other key if no: "; // Prompts user to get or not get a hint
			string hint;
			cin >> hint;
			cout << endl;
			if (hint == "Y" && hints == 0) // Prints first hint if on no hints used
			{
				cout << "FIRST HINT: This password has a total of 6 characters, consisting of capital letters and numbers!" << endl << endl;
				hints++;
			}
			else if (hint == "Y" && hints == 1) // Prints second hint if on first hint used
			{
				cout << "SECOND HINT: This password has my initials (BWH) in it!" << endl << endl;
				hints++;
			}
			else if (hint == "Y" && hints == 2) // Prints third hint if on second hint used
			{
				cout << "THIRD AND FINAL HINT: This password has the numbers 123 in it, in that specific order!" << endl << endl;
				hints++;
			}
		}
		cout << "=====TRY=====AGAIN=====" << endl;
		cout << "Enter corrected password here: "; // Prompts user to enter corrected password
		cin >> pass;
		cout << endl;
	}
	if (pass != "BWH123") // "Game Over" screen with stats
	{
		cout << "=====FIREWALL=====ACTIVE=====" << endl;
		cout << "|      |     |         |    |" << endl;
		cout << "=============================" << endl;
		cout << "|   |       |        |      |" << endl;
		cout << "=============================" << endl;
		cout << "|             |             |" << endl;
		cout << "=============================" << endl << endl;
		cout << "=====GAME=====OVER=====" << endl;
		cout << "|Attempts Done: " << attempt << "|" << endl;
		cout << "|Hints Used: " << hints << "|" << endl;
		cout << "|Correct Password: BWH123|" << endl;
		cout << "=======================" << endl << endl;
		cout << "Goodbye.";
	}
	else // "Congratulations" screen with stats
	{
		cout << endl;
		cout << "=====FIREWALL=====BREACHED=====" << endl << endl;
		cout << "Congratulations. Your password is correct!" << endl << endl;
		cout << "============STATS============" << endl;
		cout << "|Correct Password: " << pass << "|" << endl;
		if (attempt == 0)
		{
			attempt++; // Fixes logic error for if you get the password right first try
		}
		cout << "|Attempts Done: " << attempt << "|" << endl;
		cout << "|Hints Used: " << hints << "|" << endl;
		cout << "=============================" << endl << endl;
		cout << "Goodbye!!!";
	}

	return 0;
}