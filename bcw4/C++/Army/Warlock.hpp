#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "Unit.hpp"
#include "SpellCaster.hpp"
#include "Demon.hpp"

class Warlock : public SpellCaster  {
protected:
    SpellCaster* attackWa;
public:
    Demon* demon;
public:
    Warlock(int magicDamage, int hp);
    ~Warlock();

    void summon();
    void attack(Unit* target);
};

#endif //WARLOCK_HPP