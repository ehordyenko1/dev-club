#include "Berserker.hpp"

    Berserker::Berserker(int phyDamage,int hp) : Unit(phyDamage, hp) {
        attackB = new Unit();
        state->setPhyDamage(phyDamage);
        state->setHp(hp);
        state->setState("Berserker");
    }

    Berserker::~Berserker() {

    }

    void Berserker::attack(Unit* target) {
        attackB->attack(this, target);
        target->counterAttack(target, this);
    }