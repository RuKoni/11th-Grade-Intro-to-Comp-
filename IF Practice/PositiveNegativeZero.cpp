// NicholHeIFAssignment11.cpp : Defines the entry point for the console application.
//Nichol He

/*
Determines whether a number is negative, positive or zero.
Enter '-' for negative.
ex. -10 = Negative
	 10 = Positive
	 0 = Zero 
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//sets variable
	double num1;

	//asks for a number and defines variable
	cout << "Please enter a number." << endl;
	cin >> num1;

	//outputs a statement depending on the number entered
	if (num1 > 0) {
		cout << "Your number is postive." << endl;
	}
	else if (num1 < 0) {
		cout << "Your number is negative." << endl;
	} 
	else if (num1 == 0) {
		cout << "Your number is zero." << endl;
	}

    return 0;
}

