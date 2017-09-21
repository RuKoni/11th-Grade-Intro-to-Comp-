// PrimeNumbers.cpp : Defines the entry point for the console application.
// Nichol He

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string cont; 

	cout << "This is a program to output all prime numbers between 1 and 100." << endl;

		cin >> cont;

		for (int a = 1; a < 100; a++) {

			if (a == 1 || a == 2 || a == 3 || a == 5 || a == 7) {
				cout << a << " is a prime number" << endl;
			}

			else if ((a % 2) != 0) {

				if ((a % 3) != 0) {

					if ((a % 5) != 0) {

						if ((a % 7) != 0) {
							cout << a << " is a prime number" << endl;
						}
					}
				}
			}
		}

    return 0;
}

