#ifndef NECROMANCERATTACK_HPP
#define NECROMANCERATTACK_HPP

#include "Unit.hpp"

class NecromancerAttack {
protected:
    StateOfUnits* state;
public:
    void attackNec(Unit* caller, Unit* target);
};

#endif //NECROMANCERATTACK_HPP