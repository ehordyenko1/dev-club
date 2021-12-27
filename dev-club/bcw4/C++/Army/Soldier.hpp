#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include "Unit.hpp"

class Soldier : public Unit {
protected:
    Unit* attackS;
    Unit* counterAttackS;
public:
    Soldier(int phyDamage,int hp);
    ~Soldier();
    void attack(Unit* target);
};




#endif //SOLDIER_HPP