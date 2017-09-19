//Nichol He

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {

	string gameStart, name, MenuSelect;
	int Hp, Mp, HpMax, MpMax, Lvl;
	int Atk, Satk, Def, Sdef, Agi, Eva, Luck;
	int rng;

	Hp = 10;
	Mp = 8;
	HpMax = 10;
	MpMax = 8;
	Lvl = 1;
	Atk = 2;
	Satk = 2;
	Def = 2;
	Sdef = 2;
	Agi = 5;
	Eva = 5;
	Luck = 10;


	cout << "Welcome to Text and Monsters! Would you like to play?" << endl;
	cout << "\t Yes or No" << endl;
		cin >> gameStart;
	cout << endl;

	if (gameStart == "yes" || gameStart == "Yes") {
		cout << "Please enter your name" << endl;
		cout << endl;
			cin >> name;
		cout << endl << endl;
			cout << "Welcome, " << name << endl;
			cout << endl << endl;

			while (Lvl < 100) {
					cout << "Lvl " << Lvl << " " << name << endl;
					cout << "HP = (" << Hp << "/" << HpMax << ")" << endl;
					cout << "MP = (" << Mp << "/" << MpMax << ")" << endl;
					cout << endl << endl << endl << endl;
					cout << "=======================================" << endl;
					cout << endl << endl;

				cout << "Battle" << endl;
				cout << endl;
				cin >> MenuSelect;
				cout << endl;

					if (MenuSelect == "Battle" || MenuSelect == "battle") {

						srand(time(NULL));
						rng = rand() % 100;

						if (rng == 1 || rng == 100 || rng == 50) {
							cout << "You have encountered A Golden Slime" << endl;
							// Enter Battle interface
						}

						else if (rng >= 10 && rng <= 20 || rng >= 80 && rng <= 90) {
							cout << "You have encountered A Lava Slime" << endl;
							// Enter Battle interface
						}

						else if (rng >= 40 && rng <= 60) {
							cout << "You have encountered A Mud Slime" << endl;
							// Enter Battle interface
						}

						else {
							cout << "You have encourtered a Green Slime" << endl;
							// Enter Battle interface
						}	

					}

					else {
						cout << endl;
						cout << "Invalid Action" << endl;
					}
			}
	}

	else {
		cout << endl;
		cout << "See you next time!" << endl;
	}



}
