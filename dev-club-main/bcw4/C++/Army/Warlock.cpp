#include "Warlock.hpp"

Warlock::Warlock(int magicDamage, int hp) : SpellCaster(magicDamage, hp) {
    state->setMagicDamage(magicDamage);
    state->setHp(hp);
    state->setState("Warlock");
}

Warlock::~Warlock() {

}

void Warlock::summon() {
    demon = new Demon(50, 60);
}

void Warlock::attack(Unit* target) {
    attackWa->attack(this, target);
}