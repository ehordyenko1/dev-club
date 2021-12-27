#ifndef WEREWOLFATTACK_HPP
#define WEREWOLFATTACK_HPP

#include "StateOfUnits.hpp"
#include "Unit.hpp"

class WereWolfAttack {
protected:
    StateOfUnits* state;
public:
    void wereWolfAttack(Unit* caller, Unit* target);
};

#endif //WEREWOLFATTACK_HPP