#include "Unit.h"

	Unit::Unit(int hpLimit, int dmg, const std::string& name) {
		this->hpLimit = hpLimit;
		this->dmg = dmg;
		this->hp = hpLimit;
		this->name = name;
	}

	Unit::~Unit() {}

	int Unit::getDamage()const {
		return this->dmg;
	}

    int Unit::getHP() const {
    	return this->hp;
    }

    int Unit::getHpLimit() const {
    	return this->hpLimit;
    }

    const std::string& Unit::getName() const {
    	return this->name;
    }
