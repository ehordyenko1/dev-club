#ifndef PRIESTATTACK_HPP
#define PRIESTATTACK_HPP

#include "Unit.hpp"

class PriestAttack {
public:
    void attack(Unit* caller, Unit* target);
    void arcanebolt(Unit* caller, Unit* target);
};

#endif //PRIESTATTACK_HPP