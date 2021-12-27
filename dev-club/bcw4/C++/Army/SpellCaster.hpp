#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.hpp"
#include "StateOfUnits.hpp"

class SpellCaster : public Unit{
public:
    SpellCaster(int MagicDamage,int hp);
    SpellCaster();
    ~SpellCaster();
    
    void attack(Unit* caller, Unit* target);
    void counterAttack(Unit* caller, Unit* target);
    void changeDamage();
};

std::ostream& operator<<(std::ostream& out,const SpellCaster& spellcaster);

#endif //SPELLCASTER_H