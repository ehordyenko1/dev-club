#ifndef NECROMANCER_HPP
#define NECROMANCER_HPP

#include "Observer.hpp"
#include "SpellCaster.hpp"
#include "NecromancerAttack.hpp"

class NotFound{};

class Necromancer : public SpellCaster, public Observer{
protected:
    NecromancerAttack* attackNe;
public:
    Necromancer(int magicDamage, int hp);
    Necromancer();
    ~Necromancer();

    void attack(Unit* target);

    void getNotification(Observable* caller);
};

#endif //NECROMANCER_HPP