#include "SpellCaster.h"

	SpellCaster::SpellCaster(int hpLimit, int dmg, const std::string& name) {
        this->hpLimit = hpLimit;
        this->dmg = dmg;
        this->hp = hpLimit;
        this->name = name;
    }

	SpellCaster::~SpellCaster() {}

 

    
