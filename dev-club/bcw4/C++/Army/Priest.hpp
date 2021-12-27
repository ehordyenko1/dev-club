#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "SpellCaster.hpp"
#include "PriestAttack.hpp"

class Priest : public SpellCaster {
protected:
    PriestAttack* attackPr;
public:
    Priest(int magicDamage, int hp);
    ~Priest();

    void attack(Unit* target);
    void Heal();
    void arcaneBolt(Unit* target);
};

#endif //PRIEST_HPP
