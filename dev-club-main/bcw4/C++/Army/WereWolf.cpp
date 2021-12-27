#include "WereWolf.hpp"

    WereWolf::WereWolf(int phyDamage,int hp) : Unit(phyDamage, hp) {
        attackW = new WereWolfAttack();
        state->setPhyDamage(phyDamage);
        state->setHp(hp);
        state->setState("WereWolf");
    }

    WereWolf::~WereWolf() {
        delete attackW;
    }

    void WereWolf::attack(Unit* target) {
        attackW->wereWolfAttack(this, target);
        target->counterAttack(target, this);
    }

    void WereWolf::SuperWolf() {
        int dmg = state->getPhyDamage() * 2;
        int hp = state->getHP() * 2;
        
        state->addHP(hp);
        state->addDamage(dmg);

        state->changeWolf();
    }

    // void WereWolf::tranform(Unit* target) {
    //     if ( target->state->getState() == "Vampire") {
    //         std::cout << "Vampire can't transform to WereWolf!" << std::endl;
    //     } else {
    //         int hp = state->getHP();
    //         int phyDmg = state->getPhyDamage();

    //         target->state->setState("WereWolf");
    //         target->state->setHp(hp);
    //         target->state->setPhyDamage(phyDmg);
    //     }
    // }