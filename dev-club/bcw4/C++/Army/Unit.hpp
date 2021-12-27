#ifndef UNIT_H
#define	UNIT_H

#include "StateOfUnits.hpp"
#include "Observable.hpp"

class StateOfUnits;

class Unit : public Observable{
public:
	StateOfUnits* state;
public:
	Unit(int PhyDamage,int hp);
	Unit();
	~Unit();

	void attack(Unit* caller, Unit* target);
	void counterAttack(Unit* caller, Unit* target);
};

std::ostream& operator<<(std::ostream& out,const Unit& unit);

#endif //UNIT_H
