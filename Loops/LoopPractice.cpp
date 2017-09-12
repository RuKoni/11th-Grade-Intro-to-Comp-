// LoopPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char repeat = 'y';
	char loop = 'y';
	char type1, type2;
	int b = 1;

	cout << "This is a program to test out do, while, and for loops." << endl;
		cout << endl << endl;
	cout << "First is while loops." << endl;
		cout << endl << endl;

		while ( repeat == 'y' || repeat == 'Y') {
			cout << "This stamement will loop if you enter y." << endl;
				cin >> repeat;
		}

	cout << endl  << endl;
	cout << "Next is for loops. Press any key to continue." << endl;
		cin >> type1;
	cout << endl << endl;

	repeat = 'y';

		for (int a = 1; (repeat == 'y' || repeat == 'Y') && ( a < 11 ); a++) {
			cout << "This statement will loop if you enter y. But it will only loop 10 times. You are at loop #" << a << endl;
				cin >> repeat;
		}

	cout << endl << endl;
	cout << "Lastly, do statements. Press any key to continue." << endl;
		cin >> type2;
	cout << endl << endl;

		do {
			cout << "This statement will also loop if you press y. But only 10 times. You are on loop #" << b << endl;
				cin >> repeat;
			b = b++;
		}
			while ((repeat == 'y' || repeat == 'Y') && (b < 11));

	return 0;
}

