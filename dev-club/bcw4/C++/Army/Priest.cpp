#include "Priest.hpp"

    Priest::Priest(int magicDamage, int hp) : SpellCaster(magicDamage, hp) {
        attackPr = new PriestAttack();
        state->setHp(hp);
        state->setMagicDamage(magicDamage);
        state->setState("Priest");
    }

    Priest::~Priest() {
        delete attackPr;
    }

    void Priest::attack(Unit* target) {
        attackPr->attack(this, target);
        target->counterAttack(target, this);
    }

    void Priest::Heal() {
        int hp = state->getHP();
        state->addHP(hp);
    }

    void Priest::arcaneBolt(Unit* target) {
        attackPr->arcanebolt(this, target);
    }
