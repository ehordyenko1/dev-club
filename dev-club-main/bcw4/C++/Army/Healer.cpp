#include "Healer.hpp"


Healer::Healer(int MagicDamage,int hp) : SpellCaster(MagicDamage, hp) {
    attackHl = new HealerAttack();
	state->setPhyDamage(MagicDamage);
	state->setHp(hp);
	state->setState("Healer");
}

Healer::~Healer() {
    delete attackHl;
}

void Healer::attack(Unit* target) {
    attackHl->attack(this, target);
    target->counterAttack(target, this);
}

void Healer::Heal() {
    int hp = state->getHP();
    state->addHP(hp);
}

void Healer::dagger(Unit* target) {
    attackHl->StiflingDagger(this, target);
}