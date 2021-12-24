#ifndef HEALER_HPP
#define HEALER_HPP

#include "SpellCaster.hpp"
#include "HealerAttack.hpp"

class Healer : public SpellCaster {
protected:
    HealerAttack* attackHl;
public:
    Healer(int MagicDamage,int hp);
    ~Healer();

    void attack(Unit* target);
    void dagger(Unit* target);

    void Heal();
};


#endif //HEALER_HPP