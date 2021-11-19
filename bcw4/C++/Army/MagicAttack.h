#ifndef MAGICATTACK_H
#define MAGICATTACK_H

#include "Attack.h"
#include "Unit.h"
#include "PhyDamage.h"
#include "MagicDamage.h"
#include "StateOfUnits.h"
#include "windows.h"
#include "Text.h"
#include "SpellCaster.h"
#include "Book.h"

class Text;
class MagicDamage;
class PhyDamage;
class Unit;

class MagicAttack : public Attack{
protected:
	Text *text;
public:
	void attack(Unit* caller, Unit* target) override;
	void checkRogue(Unit* caller, Unit* target);
};

#endif //MAGICATTACK_H