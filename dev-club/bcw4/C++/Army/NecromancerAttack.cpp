#include "NecromancerAttack.hpp"


void NecromancerAttack::attackNec(Unit* caller, Unit* target) {
        if ( target->state->getState() == "WereWolf" && target->state->isAWolf() == true) {
            int dmg = caller->state->getMagicDamage() * 1.5;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
		} else if ( target->state->getState() == "Vampire"){
            int dmg = caller->state->getMagicDamage() * 2;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        } else {
            int dmg = caller->state->getMagicDamage();

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        }
    }






