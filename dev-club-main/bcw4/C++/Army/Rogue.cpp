#include "Rogue.hpp"

Rogue::Rogue(int phyDamage,int hp) : Unit(phyDamage, hp) {
        attackR = new Unit();
        state->setPhyDamage(phyDamage);
        state->setHp(hp);
        state->setState("Rogue");
    }

    Rogue::~Rogue() {
        delete attackR;
    }

    void Rogue::attack(Unit* target) {
        attackR->attack(this, target);
        target->counterAttack(target, this);
    }