#ifndef UNIT_H
#define	UNIT_H

#include <iostream>

#include "Attack.h"
#include "StandartAttack.h"

class Damage;
class Attack;
class StandartAttack;

class Unit {
protected:
	int hpLimit;
	int dmg;
	int hp;
	std::string name;
	std::string power;
	StandartAttack* attack1;
	std::string state;
	bool isWolf;
public:
	Unit(std::string state = "human", int hpLimit = 100, int dmg = 10, const std::string& name = "noname", const std::string& power = "noob");
	~Unit();

	void setDamage(int dmg);
	void setHpLimit(int hp);

	int getDamage() const;
    int getHP() const;
    int getHpLimit() const;
	const std::string& getPower() const;
    const std::string& getName() const;
	std::string getState() const;

	void setState(std::string State);
	void setHp(int hp);
	void setHpZero();

	void addHpVamp(int hp);
	void attack(Unit* other);
    void takeDamage(int damage);
	void counterAttack(Unit* enemy);
	void ensureIsAlive(Unit* unit);
	void becomeWolf();
};



#endif //UNIT_H
