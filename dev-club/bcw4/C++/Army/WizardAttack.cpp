#include "WizardAttack.hpp"

    void WizardAttack::attack(Unit* caller, Unit* target) {
        int dmg = caller->state->getMagicDamage();

        target->state->takeHp(dmg);
        target->state->checkHpZero(target);

        if ( target->state->getState() == "WereWolf" && target->state->isAWolf() == true) {
            int dmg = caller->state->getMagicDamage() * 1.5;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
		}
    }

    void WizardAttack::attackOrbis(Unit* caller, Unit* target) {
        if ( target->state->getState() == "Berserker") {
            std::cout << "berserker cannot be attacked by magic!" << std::endl;
            int dmg = caller->state->getMagicDamage();

            target->state->takeHp(0);
            target->state->checkHpZero(target);
        } else {
            std::cout << target->state->getState() << " was buried and takes temporary damage!" << std::endl;

            int dmg = caller->state->getMagicDamage() * 2;

            target->state->takeHp(dmg);
            target->state->checkHpZero(target);
        }
    }

    void WizardAttack::attackIceBlast(Unit* caller, Unit* target) {
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
                std::cout << target->state->getState() << " was freezed for one minute and got many injures" << std::endl;

                int dmg = caller->state->getMagicDamage() * 1.5;

                target->state->takeHp(dmg);
                target->state->checkHpZero(target);
            }
        }   