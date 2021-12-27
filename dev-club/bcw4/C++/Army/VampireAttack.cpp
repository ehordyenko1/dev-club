#include "VampireAttack.hpp"

    void VampireAttack::vampireAttack(Unit* caller, Unit* target) {
        int dmg = caller->state->getPhyDamage();

        target->state->takeHp(dmg);
        target->state->checkHpZero(target);
        caller->state->addHP(dmg/2);
   }


