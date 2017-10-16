// Hangman1.2.cpp : Defines the entry point for the console application.
// Hangman.cpp : Defines the entry point for the console application.
// Nichol He

#include "stdafx.h"
#include <iostream>
#include <string> 
#include <ctype.h>

using namespace std;

void image(int miss);

int main()
{
	string word = "";
	string guess = "";
	string output = "";
	string sub = "";
	string wordbank = "a b c d e f g h i j k l m";
	string wordbank2 = "n o p q r s t u v w x y z";
	char underscore[20] = {};
	int length = 0;
	int attempt = 5;
	int findchar;
	int num = 0;
	int a = 0;
	int replace1, replace2;
	bool endgame = true;
	int win;

	for (int i = 0; i < 20; i++) {
		underscore[i] = '_';
	}


	cout << "Welcome to Hangman 2017." << endl;
	cout << "Host - please enter a word :";
	cin >> word;
	cout << endl;

	for (int i = 0; i < 30; i++) {
		cout << endl;
	}

	length = word.length();

	for (int i = 0; i < length; i++) {
		output = output + underscore[i] + " ";
	}

	while (endgame) {

		num = 0;
		
		image(attempt);

		cout << endl;
		cout << wordbank << endl;
		cout << wordbank2 << endl;
		cout << endl << endl;
		cout << output << endl;
		cout << endl;
		cout << "You have [" << attempt << "] attempts left" << endl;
		cout << "Player, please guess a letter : ";
		cin >> guess;
		cout << endl;
		a = 0;

		for (int i = 0; i < length; i++) {

			sub = word.substr(i, 1);

			if (sub == guess) {
				num++;
			}
		}

		if (num == 0) {

			replace1 = wordbank.find(guess, 0);
			replace2 = wordbank2.find(guess,0);

			if (replace1 != -1) {
				wordbank.replace(replace1, 1, " ");
			}
			else if (replace2 != -1) {
				wordbank2.replace(replace2, 1, " ");
			}
			
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "There are no '" << guess << "'s in the word" << endl;
			cout << endl;
			attempt = attempt - 1;
		}

		else {
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "There are " << num << " " << guess << "'s in the word" << endl;
			cout << endl;

			for (int i = 0; i < length; i++) {

				sub = word.substr(i, 1);

				if (sub == guess) {
					output.replace(i + a, 1, sub);

				}

				a++;
			}
		}

		if (output.find("_", 0) == -1) {
			endgame = false;
			win = 1;
		}
		else if (attempt == 0) {
			endgame = false;
			win = 0;
		}
	}

	if (win == 1) {
		cout << endl << endl;
		cout << "--------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Conglaturations! You correctly guessed the word! Now you can indulge in your false sense of superiority!" << endl;
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------------" << endl;
	}
	else if (win == 0) {
		cout << endl << endl;
		cout << "---------------------------------------------------------" << endl;
		cout << endl;
			image(attempt);
		cout << endl;
		cout << "You lost! That's a tragedy, but that just means your bad!" << endl;
		cout << endl;
		cout << "---------------------------------------------------------" << endl;
	}
	return 0;
}

void image(int miss) {

	switch (miss) {

	case 5:

		cout << "   _____ " << endl;
		cout << "  |     | " << endl;
		cout << "  |     0 " << endl;
		cout << "  |       " << endl;
		cout << "  |       " << endl;
		cout << " _|_______" << endl;
		break;

	case 4:

		cout << "   _____ " << endl;
		cout << "  |     | " << endl;
		cout << "  |     0 " << endl;
		cout << "  |     | " << endl;
		cout << "  |       " << endl;
		cout << " _|_______" << endl;

		break;

	case 3:

		cout << "   _____ " << endl;
		cout << "  |     | " << endl;
		cout << "  |     0 " << endl;
		cout << "  |   --| " << endl;
		cout << "  |       " << endl;
		cout << " _|_______" << endl;

		break;

	case 2:

		cout << "   _____ " << endl;
		cout << "  |     | " << endl;
		cout << "  |     0 " << endl;
		cout << "  |   --|-- " << endl;
		cout << "  |          " << endl;
		cout << " _|_______" << endl;

		break;

	case 1:

		cout << "   _____ " << endl;
		cout << "  |     | " << endl;
		cout << "  |     0 " << endl;
		cout << "  |   --|-- " << endl;
		cout << "  |    /      " << endl;
		cout << " _|_______" << endl;

		break;

	case 0:

		cout << "   _____ " << endl;
		cout << "  |     | " << endl;
		cout << "  |     0 " << endl;
		cout << "  |   --|-- " << endl;
		cout << "  |    / | " << endl;
		cout << " _|_______" << endl;

		break;
	}
}

