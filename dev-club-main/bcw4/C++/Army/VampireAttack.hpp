#ifndef VAMPIREATTACK_HPP
#define VAMPIREATTACK_HPP

#include "StateOfUnits.hpp"
#include "Unit.hpp"

class VampireAttack {
protected:
    StateOfUnits* state; 
public:
    void vampireAttack(Unit* caller, Unit* target);
};

#endif //VAMPIREATTACK_HPP