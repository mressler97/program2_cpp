#ifndef WEAPONS_H
#define WEAPONS_H

class Weapons {
public:
	Weapons(const char*);
	string findWeapon(string);
private:
	int readInfo(ifstream&);
	string weaps[20];
	string weaps_hint[20];
	int no_weaps;
};

#endif /*WEAPONS_H*/