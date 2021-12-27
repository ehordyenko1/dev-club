#include "PriestAttack.hpp"


    void PriestAttack::attack(Unit* caller, Unit* target) {
        if ( target->state->getState() == "WereWolf" && target->state->isAWolf() == true) {
            int dmg = caller->state->getMagicDamage() * 1.5;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
		} else if ( target->state->getState() == "Vampire" || target->state->getState() == "Necromancer"){
            int dmg = caller->state->getMagicDamage() * 2;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        } else {
            int dmg = caller->state->getMagicDamage();

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        }
    }

    void PriestAttack::arcanebolt(Unit* caller, Unit* target) {
        if ( target->state->getState() == "Berserker") {
            std::cout << "berserker cannot be attacked by magic!" << std::endl;
            int dmg = caller->state->getMagicDamage();

            target->state->takeHp(0);
            target->state->checkHpZero(target);
            } else if ( target->state->getState() == "Berserker") {
                std::cout << "berserker cannot be attacked by magic!" << std::endl;
                int dmg = caller->state->getMagicDamage();

                target->state->takeHp(0);
                target->state->checkHpZero(target);
            } else {
                std::cout << "Arcane bolt goes to " << target->state->getState() << " and inflicted damage!" << std::endl;

                int dmg = caller->state->getMagicDamage() * 1.5;

                target->state->takeHp(dmg);
                target->state->checkHpZero(target);
            }
        }