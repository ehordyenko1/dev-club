#ifndef ATTACK_H
#define ATTACK_H

class Unit;

class Attack {
public:
	virtual void attack(Unit* caller, Unit* target) = 0;
};

#endif //ATTACK_H