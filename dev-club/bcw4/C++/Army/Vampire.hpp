#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Unit.hpp"
#include "VampireAttack.hpp"

class Vampire : public Unit {
protected:
    VampireAttack* attackB;
public:
    Vampire(int phyDamage,int hp);
    ~Vampire();
    void attack(Unit* target);

    // void transform(Unit* target); //temporarily not working
};

#endif //VAMPIRE_HPP