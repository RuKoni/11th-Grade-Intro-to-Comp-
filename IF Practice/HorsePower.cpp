// NicholHeIFAssignment13.cpp : Defines the entry point for the console application.
//Nichol He

/*
This program gives a fee based on the horsepower entered.
Enter any integer.
<0 = Error
1-50 = $20
51-99 = $40
100 - 149 = $65
150 + = $120
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//variable
	int p;

	//Asks for input, stores as p
	cout << "Please enter horsepower." << endl;
		cin >> p;

	//Gives a different message for each interval
		if (p <= 0) {
			cout << "Error." << endl;
			}
		else if (0 < p && p <= 50) { // '&&' is to set p within intervals
			cout << "Your fee is $20" << endl;
			}
		else if (50 < p && p < 100) {
			cout << "Your fee is $40" << endl;
			}
		else if (100 <= p && p < 150) {
			cout << "Your fee is $65" << endl;
			}
		else if (150 <= p) {
			cout << "Your fee is $120" << endl;
			}

    return 0;
}

