#ifndef MURDER_H
#define MURDER_H

class Murder {
public:
	Murder(const char*);
	bool weapon_matches(string, Weapons);
	bool room_matches(string, Mansion);
	string whereCommitted();
	string withWhat();
private:
	void readInfo(ifstream&);
	string where;
	string what;
};

#endif /*MURDER_H*/