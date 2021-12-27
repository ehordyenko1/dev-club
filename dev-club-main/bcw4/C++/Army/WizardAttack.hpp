#ifndef WIZARDATTACK_HPP
#define WIZARDATTACK_HPP

#include "StateOfUnits.hpp"
#include "Unit.hpp"

class WizardAttack {
public:
    void attack(Unit* caller, Unit* target);
    void attackOrbis(Unit* caller, Unit* target);
    void attackIceBlast(Unit* caller, Unit* target);
};
#endif //WIZARDATTACK_HPP