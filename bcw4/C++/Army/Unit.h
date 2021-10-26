#ifndef UNIT_H
#define	UNIT_H

#include <iostream>

class Unit {
private:
	int hpLimit;
	int dmg;
	int hp;
	std::string name;
public:
	Unit(int hpLimit = 100, int dmg = 10, const std::string& name = "noname");
	~Unit();

	int getDamage() const;
    int getHP() const;
    int getHpLimit() const;
    const std::string& getName() const;
};



#endif //UNIT_H

