#ifndef MAIN_H
#define MAIN_H

class Main {
public:
	Mansion(const char*, int);
	int get_number_of_suspects();
	string findRoom(string);
private:
	int readInfo(ifstream&);
	string rooms[20];
	string rooms_hint[20];
	int no_rooms;
	int no_suspects;
};

#endif /*MANSION_H*/