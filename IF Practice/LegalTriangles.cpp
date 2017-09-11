// NicholHeIFAssignment12.cpp : Defines the entry point for the console application.
//Nichol He

/*
Determines whether a triangle is a legal triangle by the Triangle Inequality Theorum.
If the entered sides fit the requirement of "the sum of the shorter lengths is greater than the longest length." - 
- then the output will say "Your triangle is a legal triangle."
If it doesn't fit the requirment, the output will say "Your triangle is not a legal triangle."
Ex. [2,4,8] is not a legal triangle
	[2,5,6] is a legal triangle
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//sets variables
	double sideA, sideB, sideC;

	//asks for legnths
	cout << "Please enter the first length of a triangle." << endl;
		cin >> sideA;
	cout << "Please enter a second legnth." << endl;
		cin >> sideB;
	cout << "Please enter a third length." << endl;
		cin >> sideC;
	
	//if statements to determing whether the sides meet triangle requirements
	if (sideC > (sideB && sideA)) { //Determines which side is the longest
		if (sideA + sideB > sideC) { //Determines if the sum of the short sides are greater than the long side.
			cout << "Your triangle is a legal triangle." << endl;
		}
		else
			cout << "Your triangle is not a legal triangle." << endl;
	}
	else if (sideB > (sideA && sideC)) {
		if (sideA + sideC > sideB) {
			cout << "Your triangle is a legal triangle." << endl;
		}
		else
			cout << "Your triangle is not a legal triangle." << endl;
	}
	else if (sideA > (sideB && sideC)) {
		if (sideB + sideC > sideA) {
			cout << "Your triangle is a legal triangle." << endl;
		}
		else
			cout << "Your triangle is not a legal triangle." << endl;
	}

    return 0;
}

