//Nichol He

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

        string gameStart, name, MenuSelect, action, cont;
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

void greenSlime(string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva);
void lavaSlime(string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva);
void mudSlime(string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva);
void goldenSlime(string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva);

int main() {

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
				MHp = 0;

				for (; MHp > 0 || Hp > 0;) {

					if (rng == 1 || rng == 100 || rng == 50) {
						cout << "You have encountered A Golden Slime" << endl;
						cout << endl << endl;

						goldenSlime(Mname, Mlvl, MHp, MHpMax, MMp, MMpMax, MAtk, MDef, MSatk, MSdef, MAgi, MEva);

						cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
						cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
						cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
						cout << endl << endl << endl;
						cout << "===============================================" << endl;

						cout << endl;
						cout << "Attack" << endl;
						cout << "Defend" << endl;
							cin >> action;
						cout << endl;

						if (action == "Attack" || action == "attack") {

							int dmg = ((Atk + Satk) - (MDef + MSdef)) * 1.5;
							int Mdmg = ((MAtk + MSatk) - (Def + Sdef));

							MHp = MHp - dmg;
							Hp = Hp - Mdmg;
							cout << "You attacked  " << Mname << "!" << endl;
							cout << Mname << " took" << dmg << " damage!" << endl;
							cout << endl;
							cout << Mname << " counter attacked!" << endl;
							cout << "You took " << Mdmg << " damage!" << endl;
							cin >> cont;
						}
					}

					else if (rng >= 10 && rng <= 20 || rng >= 80 && rng <= 90) {
						cout << "You have encountered A Lava Slime" << endl;
						cout << endl << endl;

						lavaSlime(Mname, Mlvl, MHp, MHpMax, MMp, MMpMax, MAtk, MDef, MSatk, MSdef, MAgi, MEva);

						cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
						cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
						cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
						cout << endl << endl << endl;
						cout << "===============================================" << endl;

						if (action == "Attack" || action == "attack") {

							int dmg = ((Atk + Satk) - (MDef + MSdef)) * 1.5;
							int Mdmg = ((MAtk + MSatk) - (Def + Sdef));

							MHp = MHp - dmg;
							Hp = Hp - Mdmg;
							cout << "You attacked  " << Mname << "!" << endl;
							cout << Mname << " took" << dmg << " damage!" << endl;
							cout << endl;
							cout << Mname << " counter attacked!" << endl;
							cout << "You took " << Mdmg << " damage!" << endl;
							cin >> cont;
						}
					}

					else if (rng >= 40 && rng <= 60) {
						cout << "You have encountered A Mud Slime" << endl;
						cout << endl << endl;

						mudSlime(Mname, Mlvl, MHp, MHpMax, MMp, MMpMax, MAtk, MDef, MSatk, MSdef, MAgi, MEva);

						cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
						cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
						cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
						cout << endl << endl << endl;
						cout << "===============================================" << endl;

						if (action == "Attack" || action == "attack") {

							int dmg = ((Atk + Satk) - (MDef + MSdef)) * 1.5;
							int Mdmg = ((MAtk + MSatk) - (Def + Sdef));

							MHp = MHp - dmg;
							Hp = Hp - Mdmg;
							cout << "You attacked  " << Mname << "!" << endl;
							cout << Mname << " took" << dmg << " damage!" << endl;
							cout << endl;
							cout << Mname << " counter attacked!" << endl;
							cout << "You took " << Mdmg << " damage!" << endl;
							cin >> cont;
						}
					}

					else {
						cout << "You have encourtered a Green Slime" << endl;
						cout << endl << endl;

						greenSlime(Mname, Mlvl, MHp, MHpMax, MMp, MMpMax, MAtk, MDef, MSatk, MSdef, MAgi, MEva);

						cout << "Lvl " << Lvl << " " << name << setw(22) << "Lvl " << Mlvl << " " << Mname << endl;
						cout << "HP = ( " << Hp << "/" << HpMax << " )" << setw(22) << "HP = ( " << MHp << "/" << MHpMax << " )" << endl;
						cout << "MP = ( " << Mp << "/" << MpMax << " )" << setw(24) << "MP = ( " << MMp << "/" << MMpMax << " )" << endl;
						cout << endl << endl << endl;
						cout << "===============================================" << endl;

						if (action == "Attack" || action == "attack") {

							int dmg = ((Atk + Satk) - (MDef + MSdef)) * 1.5;
							int Mdmg = ((MAtk + MSatk) - (Def + Sdef));

							MHp = MHp - dmg;
							Hp = Hp - Mdmg;
							cout << "You attacked  " << Mname << "!" << endl;
							cout << Mname << " took" << dmg << " damage!" << endl;
							cout << endl;
							cout << Mname << " counter attacked!" << endl;
							cout << "You took " << Mdmg << " damage!" << endl;
							cin >> cont;
						}
					}
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

void greenSlime(string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva) {
	
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

}

void lavaSlime(string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva) {

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

}

void mudSlime(string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva) {

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

}

void goldenSlime (string &Mname, int &Mlvl, int &MHp, int &MHpMax, int &MMp, int &MMpMax, int &MAtk, int &MDef, int &MSatk, int &MSdef, int &MAgi, int &MEva) {

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
}


