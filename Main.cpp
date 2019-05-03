/* Name:	Michael Ressler
 * Class:	CSCI112 Programming with C
 * Assignment:	Program 2 (C++ program)
 * Date:	4/26/2019
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
#include "Mansion.h"
#include "Suspect.h"
#include "Weapons.h"
#include "Murder.h"



int main(int argc, char** argv) {
	Suspect suspects[10];
	ifstream infile;
	infile.open("suspects.txt");
	int i = 0;

	while (!infile.eof()) {
		suspects[i++].readSuspect(infile);
		i++;
	}
	infile.close();

	Murder murder("murder.txt");
	Mansion mansion("mansion.txt", i);
	Weapons weapons("weaponclues.txt");
	string weapon_clue, room_clue;

	for (i = 0; i < mansion.get_number_of_suspects(); ++i) {
		weapon_clue = suspects[i].get_weapon_clue();
		room_clue = suspects[i].get_room_clue();
		if (murder.weapon_matches(weapon_clue, weapons)) {
			murder.room_matches(room_clue, mansion);
			cout << "The murder was committed by " <<
				suspects[i].getName() << " in the " <<
				murder.whereCommitted() << " with a " <<
				murder.withWhat() << endl;
			break;
		}
	}
	return(0);
}

