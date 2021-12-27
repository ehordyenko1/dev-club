#include "Vampire.hpp"

    Vampire::Vampire(int phyDamage,int hp) : Unit(phyDamage, hp) {
        state->setPhyDamage(phyDamage);
        state->setHp(hp);
        state->setState("Vampire");
    }

    Vampire::~Vampire() {
        delete attackB;
    }

    void Vampire::attack(Unit* target) {
        attackB->vampireAttack(this, target);
        target->counterAttack(target, this);
    }

    // void Vampire::transform(Unit* target) {
    //     if ( target->state->getState() == "WereWolf") {
    //         std::cout << "WereWolf can't transform to Vampire!" << std::endl;
    //         } else {
    //             int hp = state->getHP();
    //             int phyDmg = state->getPhyDamage();

    //             target->state->setState("Vampire");
    //             target->state->setHp(hp);
    //             target->state->setPhyDamage(phyDmg);
    //         }
    //     }


