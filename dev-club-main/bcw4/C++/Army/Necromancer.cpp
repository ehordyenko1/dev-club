#include "Necromancer.hpp"
#include <iostream>


Necromancer::Necromancer(int magicDamage, int hp) : SpellCaster(magicDamage, hp) { 
    state->setHp(hp);
    state->setMagicDamage(magicDamage);
    state->setState("Necromancer");
}

Necromancer::Necromancer() {

}

Necromancer::~Necromancer() {
    delete attackNe; 
}

void Necromancer::attack(Unit* target) {
    attackNe->attackNec(this, target);
    addObservables(target);
    // target->counterAttack(target, this);
}

void Necromancer::getNotification(Observable* caller) {
	if ( observables.find(caller) == observables.end()) {
		throw NotFound();
	}
 
	observables.erase(caller);

    state->addHP(100);
}