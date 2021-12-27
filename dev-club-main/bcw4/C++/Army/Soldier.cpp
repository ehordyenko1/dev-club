#include "Soldier.hpp"

Soldier::Soldier(int phyDamage,int hp) : Unit(phyDamage, hp) {
        attackS = new Unit();
        counterAttackS = new Unit();
        state->setPhyDamage(phyDamage);
        state->setHp(hp);
        state->setState("Soldier");
    }

    Soldier::~Soldier() {
        delete state;
        delete attackS;
        delete counterAttackS;
    }

    void Soldier::attack(Unit* target) {
        attackS->attack(this, target);
        target->counterAttack(target, this);
    }