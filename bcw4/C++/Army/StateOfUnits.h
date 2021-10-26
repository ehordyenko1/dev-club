#ifndef STATEOFUNITS_H
#define STATEOFUNITS_H

#include "Unit.h"
#include "Soldier.h"

class Unit;
class Soldier;

class StateOfUnits {
private:
	int dmg;
	int hp;
	int hpLimit;
	std::string name;
};
	std::ostream& operator<<(std::ostream& out, const Soldier& unit);





#endif //STATEOFUNITS_H