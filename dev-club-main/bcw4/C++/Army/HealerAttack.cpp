#include "HealerAttack.hpp"

    void HealerAttack::attack(Unit* caller, Unit* target) {
        if ( target->state->getState() == "WereWolf" && target->state->isAWolf() == true) {
            int dmg = caller->state->getMagicDamage() * 1.5;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        } else {
            int dmg = caller->state->getMagicDamage();

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        }
    }

    void HealerAttack::sunStrike(Unit* caller, Unit* target) {
        if ( target->state->getState() == "Berserker"){
            std::cout << "berserker cannot be attacked by magic!" << std::endl;
            int dmg = caller->state->getMagicDamage();

            target->state->takeHp(0);
            target->state->checkHpZero(target);
        } else {
            std::cout << target->state->getState() << " was burned by a ray of sun!" << std::endl;

            int dmg = caller->state->getMagicDamage() * 1.5;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        }
    }

    void HealerAttack::StiflingDagger(Unit* caller, Unit* target) {
        if ( target->state->getState() == "Berserker"){
            std::cout << "berserker cannot be attacked by magic!" << std::endl;
            int dmg = caller->state->getMagicDamage();

            target->state->takeHp(0);
            target->state->checkHpZero(target);

            } else {
                std::cout << target->state->getState() << " got damage from dagger" << std::endl;

                int dmg = caller->state->getMagicDamage() * 1.5;

                target->state->takeHp(dmg);
                target->state->checkHpZero(target);
            }
        }