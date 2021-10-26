#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>

#include "Unit.h"

class SpellCaster : public Unit{
private:
	int hpLimit;
	int dmg;
	std::string name;
	int hp;
public:
	SpellCaster(int hpLimit, int dmg, const std::string& name);
	~SpellCaster();
};

#endif //SPELLCASTER_H