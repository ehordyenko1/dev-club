#ifndef BERSERKER_HPP
#define BERSERKER_HPP

#include "Unit.hpp"

class Berserker : public Unit {
protected:
    Unit* attackB;
public:
    Berserker(int phyDamage,int hp);
    ~Berserker();
    void attack(Unit* target);
};

#endif //BERSERKER_HPP