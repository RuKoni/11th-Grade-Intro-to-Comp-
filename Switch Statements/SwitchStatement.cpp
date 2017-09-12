// SwitchStatement.cpp : Defines the entry point for the console application.
//Nichol He

/* Program that gives a comment based on Grade typed. Both uppercase or lower case is fine.
	A = Wow
	B = Nice
	C/D = Try harder next time
	F = RIP in spaghetti 
	Anything else = Invalid grade, please try again

	Type y to try again, any other input will end the program
*/
#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//Variables
	char grade;
	grade = 'A', 'B', 'C', 'D', 'F';
	grade = 'a', 'b', 'c', 'd', 'f';
	char repeat = 'Y';

	//Loop if end input = Y or y
	while (repeat == 'Y' || repeat == 'y') {
		//Output to ask for graden and stores as variable
		cout << "Please enter your grade." << endl;
		cin >> grade;
		//switch statement that outputs based on variable "grade"
		switch (grade) {
			case 'A':
			case 'a':
				cout << "Wow" << endl;
				break;
			case 'B':
			case 'b':
				cout << "Nice" << endl;
				break;
			case 'C':
			case 'c':
			case 'D':
			case 'd':
				cout << "Try harder next time" << endl;
				break;
			case 'F':
			case 'f':
				cout << "RIP in spaghetti" << endl;
				break;
			default:
				cout << "Invalid grade, please try again" << endl;
		}
		//Output after switch statement 
		cout << endl << endl;
		cout << "Would you like to try again? Y or N" << endl;
			cin >> repeat;
		cout << endl << endl;
	}
	return 0;
}

