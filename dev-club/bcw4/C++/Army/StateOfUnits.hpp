#ifndef STATEOFUNITS_H
#define STATEOFUNITS_H

#include <iostream>
#include "Death.hpp"
#include "Unit.hpp"


class Unit;
class Death;

class StateOfUnits {
protected:
	Death* death;
	int PhyDamage;
	int MagicDamage;
	int hp;
	std::string state;
	std::string typeOfDamage;
	bool isWolf;
	int hpLimit;
public:
	StateOfUnits();
	int getHP() const;
	int getPhyDamage() const;
	int getMagicDamage() const;
	std::string getState() const;
	std::string getTypeOfDamage()const;
	int getHpLimit();

	void setHpLimit(int hpLimit);
	void setHp(int hp);
	void setPhyDamage(int dmg);
	void setMagicDamage(int dmg);
	void setState(std::string State);
	void setTypeOfDamage(std::string typeOfDamage);
	void checkHpZero(Unit* unit);
	void addHP(int hp);
	void addDamage(int dmg);

	void takeHp(int damage);
	bool isAWolf();
	void changeWolf();
};

#endif //STATEOFUNITS_H