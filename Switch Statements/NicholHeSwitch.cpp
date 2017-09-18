// NicholHeSwitch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Num1, Num2, operation, result;

	cout << "Welcome! Please enter your first Number." << endl;
		cin >> Num1;
	cout << "Please enter your second Number." << endl;
		cin >> Num2;
	cout << "Please enter the operation you would like to perform." << endl;
	cout << "Enter 1 for Addition" << endl;
	cout << "Enter 2 for Subtraction" << endl;
	cout << "Enter 3 for Multiplication" << endl;
	cout << "Enter 4 for Division" << endl;
	cout << "Enter 5 for Average" << endl;
	cout << "Enter 6 for Modulus" << endl;
		cin >> operation;

	cin >> operation; 

		switch (operation) {
			case (1) :
				result = Num1 + Num2;
				cout << "The sum of your numbers is " << result << endl;
				break;
			case (2) :
				result = Num1 - Num2;
				cout << "The difference of your numbers is " << result << endl;
				break;
			case (3) :
				result = Num1 * Num2;
				cout << "The product of your numbers is " << result << endl;
				break;
			case (4) :
				result = Num1 / Num2;
				cout << "The quotient of your numbers is " << result << endl;
				break;
			case (5) :

				break;
			case (6) :

				break;
		}
	return 0;
}

