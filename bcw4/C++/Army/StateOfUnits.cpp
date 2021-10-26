#include "StateOfUnits.h"

std::ostream& operator<<(std::ostream& out, const Soldier& unit) {
	out << "HP of " << unit.getName() << " is " << unit.getHP() << "/" << unit.getHpLimit() << std::endl;
	out << "Damage of " << unit.getName() << " " << unit.getDamage() << std::endl;
	return out;
}