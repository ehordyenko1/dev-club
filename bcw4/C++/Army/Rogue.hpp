#ifndef ROGUE_HPP
#define ROGUE_HPP

#include "Unit.hpp"

class Rogue : public Unit {
protected:
    Unit* attackR;
public:
    Rogue(int phyDamage,int hp);
    ~Rogue();
    void attack(Unit* target);
};

#endif //ROGUE_HPP