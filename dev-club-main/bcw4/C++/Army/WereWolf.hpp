#ifndef WEREWOLF_HPP
#define WEREWOLF_HPP

#include "Unit.hpp"
#include "WereWolfAttack.hpp"

class WereWolf : public Unit {
protected:
    WereWolfAttack* attackW;
public:
    WereWolf(int phyDamage,int hp);
    ~WereWolf();
    void attack(Unit* target);
    void SuperWolf();

    // void tranform(Unit* target); //temporarily not working
};


#endif //WEREWOLF_HPP