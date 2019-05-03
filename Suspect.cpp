#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include "Suspect.h"

Suspect::Suspect() {
	name = "noname";
	weapon_clue = "noweapon";
	room_clue = "noroom";
	return;
}

void Suspect::readSuspect(ifstream& infile) {
	infile >> name >> weapon_clue >> room_clue;
	return;
}

string Suspect::getName() {
	return name;
}

string Suspect::get_weapon_clue() {
	return weapon_clue;
}

string Suspect::get_room_clue() {
	return room_clue;
}