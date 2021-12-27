#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "SpellCaster.hpp"
#include "WizardAttack.hpp"

class Wizard : public SpellCaster { 
protected:
    WizardAttack* attackWz;
public:
    Wizard(int MagicDamage,int hp);
    ~Wizard();
    void Orbis(Unit* target);
    void attack(Unit* target);
    void IceBlast(Unit* target);

    void Heal();
};

#endif //WIZARD_HPP