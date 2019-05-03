#ifndef SUSPECT_H
#define SUSPECT_H

class Suspect {
public:
	Suspect();
	void readSuspect(ifstream&);
	string getName();
	string get_room_clue();
	string get_weapon_clue();
private:
	string name;
	string weapon_clue;
	string room_clue;
};

#endif /*SUSPECT_H*/