#ifndef HEALERATTACK_HPP
#define HEALERATTACK_HPP

#include "Unit.hpp"

class HealerAttack {
public:
    void attack(Unit* caller, Unit* other);

    void sunStrike(Unit* caller, Unit* target);
    void StiflingDagger(Unit* caller, Unit* target);
};

#endif //HEALERATTACK_HPP
