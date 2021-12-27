#include "Unit.hpp"

Unit::Unit(int phyDamage,int hp) {
	state = new StateOfUnits();
	state->setPhyDamage(phyDamage);
	state->setHp(hp);
	state->setHpLimit(hp);
}

Unit::Unit() {
	
}

Unit::~Unit() {
	delete state;
}

void Unit::attack(Unit* caller, Unit* target) {
	int dmg = caller->state->getPhyDamage();

    target->state->takeHp(dmg);
    target->state->checkHpZero(target);
}

void Unit::counterAttack(Unit* caller, Unit* target) {
	if ( target->state->getState() == "Rogue") {
		std::cout << "Rogue couldn't be counter attacked!" << std::endl;
		int dmg = caller->state->getPhyDamage() / 2;

		target->state->takeHp(0);
		target->state->checkHpZero(target);
	} else {
		int dmg = caller->state->getPhyDamage() / 4;

		target->state->takeHp(dmg);
		target->state->checkHpZero(target);
	}
}

std::ostream& operator<<(std::ostream& out,const Unit& unit) {
	out << "Damage of " << unit.state->getState() << " : ";
	out << unit.state->getPhyDamage();
	out << " | HP now : " << unit.state->getHP();
	return out;
}