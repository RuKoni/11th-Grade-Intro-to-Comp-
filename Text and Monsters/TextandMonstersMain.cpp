// TextandMonsters.cpp : Defines the entry point for the console application.
//Nichol He

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
void greenSlime ();
void lavaSlime ();
void mudSlime ();
void goldenSlime ();

int main() {

	string gameStart, name, MenuSelect;
	int Hp, Mp, HpMax, MpMax, Lvl;
	int Atk, Satk, Def, Sdef, Agi, Eva, Luck;

	string Mname;
	int Mlvl, MHp, MHpMax, MMp, MMpMax; 
	int MAtk, MDef, MSatk, MSdef, MAgi, MEva;
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
							cout << endl << endl;
							int goldenSlime;

							cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
							cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
							cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
							cout << endl << endl << endl;
							cout << "===============================================" << endl;
						}

						else if (rng >= 10 && rng <= 20 || rng >= 80 && rng <= 90) {
							cout << "You have encountered A Lava Slime" << endl;
							cout << endl << endl;
							int lavaSlime;

							cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
							cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
							cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
							cout << endl << endl << endl;
							cout << "===============================================" << endl;
						}

						else if (rng >= 40 && rng <= 60) {
							cout << "You have encountered A Mud Slime" << endl;
							cout << endl << endl;
							int mudSlime;

							cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
							cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
							cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
							cout << endl << endl << endl;
							cout << "===============================================" << endl;
						}

						else {
							cout << "You have encourtered a Green Slime" << endl;
							cout << endl << endl;

							int greenSlime;

							cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
							cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
							cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
							cout << endl << endl << endl;
							cout << "===============================================" << endl;
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

void greenSlime() {
	string Mname;
	int Mlvl, MHp, MHpMax, MMp, MMpMax; 
	int MAtk, MDef, MSatk, MSdef, MAgi, MEva;

	Mname = "Green Slime";
	Mlvl = 5;
	MHp = 10;
	MHpMax = 10;
	MMp = 5;
	MMpMax = 5;
	MAtk = 2;
	MDef = 1;
	MSatk = 0;
	MSdef = 0;
	MAgi = 2;
	MEva = 2;

	return;
}

void lavaSlime () {
	string Mname;
	int Mlvl, MHp, MHpMax, MMp, MMpMax; 
	int MAtk, MDef, MSatk, MSdef, MAgi, MEva;

	Mname = "Lava Slime";
	Mlvl = 5;
	MHp = 8;
	MHpMax = 8;
	MMp = 5;
	MMpMax = 5;
	MAtk = 4;
	MDef = 2;
	MSatk = 0;
	MSdef = 0;
	MAgi = 2;
	MEva = 2;

	return;
}

void mudSlime (){
	string Mname;
	int Mlvl, MHp, MHpMax, MMp, MMpMax; 
	int MAtk, MDef, MSatk, MSdef, MAgi, MEva;

	Mname = "Mud Slime";
	Mlvl = 5;
	MHp = 12;
	MHpMax = 12;
	MMp = 5;
	MMpMax = 5;
	MAtk = 1;
	MDef = 4;
	MSatk = 0;
	MSdef = 0;
	MAgi = 2;
	MEva = 2;

	return;
}
void goldenSlime () {
	string Mname;
	int Mlvl, MHp, MHpMax, MMp, MMpMax; 
	int MAtk, MDef, MSatk, MSdef, MAgi, MEva;

	Mname = "Golden Slime";
	Mlvl = 5;
	MHp = 5;
	MHpMax = 5;
	MMp = 5;
	MMpMax = 5;
	MAtk = 1;
	MDef = 1;
	MSatk = 0;
	MSdef = 0;
	MAgi = 1;
	MEva = 1;

	return;
}
