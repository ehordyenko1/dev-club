#include "SpellCaster.h"

	SpellCaster::SpellCaster(std::string state, int hpLimit, int dmg, const std::string& name, const std::string& power) {
        this->hpLimit = hpLimit;
        this->dmg = dmg;
        this->hp = hpLimit;
        this->name = name;
        this->power = power;
        this->attack2 = new MagicAttack();
    }

	SpellCaster::~SpellCaster() {}

    void SpellCaster::attack(Unit* other) {
        this->attack2->attack(this, other);
    }
