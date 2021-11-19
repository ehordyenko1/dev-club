#ifndef STANDARTATTACK_H
#define STANDARTATTACK_H

#include "Attack.h"
#include "Unit.h"
#include "PhyDamage.h"
#include "MagicDamage.h"
#include "StateOfUnits.h"
#include "windows.h"
#include "Text.h"

class Text;

class StandartAttack : public Attack{
protected:
	Text *text;
public:
	void attack(Unit* caller, Unit* target) override;
	void checkRogue(Unit* caller, Unit* target);
};

#endif //STANDARTATTACK_H