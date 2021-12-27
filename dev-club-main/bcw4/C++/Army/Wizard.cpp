#include "Wizard.hpp"

Wizard::Wizard(int MagicDamage,int hp) : SpellCaster(MagicDamage, hp) {
    attackWz = new WizardAttack();
	state->setPhyDamage(MagicDamage);
	state->setHp(hp);
	state->setState("Wizard");
}

Wizard::~Wizard() {
    delete attackWz;
}

void Wizard::Orbis(Unit* target) {
    attackWz->attackOrbis(this, target);
}

void Wizard::attack(Unit* target) {
    attackWz->attack(this, target);
    target->counterAttack(target, this);
}

void Wizard::IceBlast(Unit* target) {
    attackWz->attackIceBlast(this, target);
}

void Wizard::Heal() {
    int hp = state->getHP() / 2;
    
    state->addHP(hp);
}
