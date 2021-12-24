#include "SpellCaster.hpp"

SpellCaster::SpellCaster(int MagicDamage,int hp) {
	state = new StateOfUnits();
	state->setMagicDamage(MagicDamage);
	state->setHp(hp);
	state->setHpLimit(hp);
}

SpellCaster::SpellCaster() {

}

SpellCaster::~SpellCaster() {
    delete state;
}

void SpellCaster::attack(Unit* caller, Unit* target) {
	int dmg = caller->state->getMagicDamage();

    target->state->takeHp(dmg);
    target->state->checkHpZero(target);

	if ( target->state->getState() == "WereWolf" && target->state->isAWolf() == true) {
		int dmg = caller->state->getMagicDamage() * 1.5;

		target->state->takeHp(dmg);
		target->state->checkHpZero(target);
	}
}

void SpellCaster::counterAttack(Unit* caller, Unit* target) {
	if ( target->state->getState() == "Rogue") {
		int dmg = caller->state->getMagicDamage() / 2;

		target->state->takeHp(0);
		target->state->checkHpZero(target);
	} else {
		if ( state->getState() == "WereWolf" && state->isAWolf() == true) {
		int dmg = caller->state->getMagicDamage() * 1.5;

		target->state->takeHp(dmg);
		target->state->checkHpZero(target);
		}
	}
}

void SpellCaster::changeDamage() {
	int phyDmg = state->getMagicDamage() / 2;

	state->setTypeOfDamage("phy");
	state->setPhyDamage(phyDmg);
}

std::ostream& operator<<(std::ostream& out,const SpellCaster& spellcaster) {
	out << "Damage of " << spellcaster.state->getState() << " : ";
	if ( spellcaster.state->getTypeOfDamage() == "phy") {
		out << spellcaster.state->getPhyDamage();
		out << " | HP now : " << spellcaster.state->getHP();
	} else {
		out << spellcaster.state->getMagicDamage();
		out << " | HP now : " << spellcaster.state->getHP();
	}
	return out;
}