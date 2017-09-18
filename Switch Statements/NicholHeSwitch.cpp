// NicholHeSWITCH.cpp : Defines the entry point for the console application.
// Nichol He

/*
Program that takes in 2 numbers and gives an option for operations. Then performs the operation on inputted Numbers.
1) Addition
2) Subtraction
3) Multiplication
4) Division
5) Average
6) Modulo
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//list Variables
	double result, Num1, Num2;
	int operation;
		//Asks for input and gives option screen
	cout << "Welcome! Please enter your first Number." << endl;
	cin >> Num1;
	cout << endl;
	cout << "Please enter your second Number." << endl;
	cin >> Num2;
	cout << endl;
	cout << "Please enter the operation you would like to perform." << endl;
	cout << "\t 1 for Addition" << endl;
	cout << "\t 2 for Subtraction" << endl;
	cout << "\t 3 for Multiplication" << endl;
	cout << "\t 4 for Division" << endl;
	cout << "\t 5 for Average" << endl;
	cout << "\t 6 for Modulus" << endl;
	cin >> operation;
	cout << endl;
		//switch statement to evaluate operation choice and outputs result
	switch (operation) {
	default : 
		cout << "Invalid Option" << endl;
		break;
	case (1):
		result = Num1 + Num2;
		cout << "The sum of your numbers is " << result << endl;
		break;
	case (2):
		result = Num1 - Num2;
		cout << "The difference of your numbers is " << result << endl;
		break;
	case (3):
		result = Num1 * Num2;
		cout << "The product of your numbers is " << result << endl;
		break;
	case (4):
		result = Num1 / Num2;
		cout << "The quotient of your numbers is " << result << endl;
		break;
	case (5):
		result = (Num1 + Num2) / 2;
		cout << "The average of your numbers is " << result << endl;
		break;
	case (6):
		result = fmod(Num1, Num2);
		cout << "The modolus of your numbers is " << result << endl;
		break;
	}

	return 0;
}


