#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "MagicAttack.h"
#include "Unit.h"
#include "Book.h"

class MagicAttack;

class SpellCaster : public Unit{
protected:
	MagicAttack* attack2;
	std::string state;
public:
	SpellCaster(std::string state, int hpLimit, int dmg, const std::string& name, const std::string& power);
	~SpellCaster();

	void attack(Unit* other);
};

#endif //SPELLCASTER_H