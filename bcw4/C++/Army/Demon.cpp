#include "Demon.hpp"

Demon::Demon(int magicDamage, int hp) : Soldier(magicDamage, hp) {
    state->setHp(50);
    state->setMagicDamage(60);
    state->setState("Demon");
}

Demon::~Demon() {

}
