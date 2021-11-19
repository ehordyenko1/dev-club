#include "Unit.h"
	
	void Unit::ensureIsAlive(Unit* unit) {
		if ( unit->getHP() == 0 ) {
			std::cout << unit->getName() << " is dead" << std::endl;
		}
	}

	Unit::Unit(std::string state, int hpLimit, int dmg, const std::string& name, const std::string& power) {
		this->hpLimit = hpLimit;
		this->dmg = dmg;
		this->hp = hpLimit;
		this->name = name;
		this->power = power;
		this->attack1 = new StandartAttack();
		this->state = state;
		this->isWolf = false;
	}

	Unit::~Unit() {
		delete attack1;
	}

	void Unit::setDamage(int damage) {
		this->dmg = damage;
	}

	void Unit::setHpLimit(int hitPoints) {
		this->hpLimit = hitPoints;
	}

	int Unit::getDamage()const {
		return this->dmg;
	}

    int Unit::getHP() const {
    	return this->hp;
    }

    int Unit::getHpLimit() const {
    	return this->hpLimit;
    }

	const std::string& Unit::getPower() const {
		return this->power;
	}

    const std::string& Unit::getName() const {
    	return this->name;
    }

	std::string Unit::getState() const {
		return this->state;
	}

	void Unit::setState(std::string State) {
		this->state = State;
	}

	void Unit::setHp(int HP1) {
		this->hp = HP1;
	}

	void Unit::setHpZero() {
		if ( getHP() <= 0 ) { 
			this->hp = 0;
		}
	}

	void Unit::addHpVamp(int HP) {
		if (getState() == "Vampire") {
			this->hp += HP;
			if ( hp > hpLimit ) {
				this->hp = hpLimit;
			}
		} else {
			std::cout << "error, it's not a vampire" << std::endl;
		}

	}

	void Unit::attack(Unit* other) {
		this->attack1->attack(this, other);
	}

    void Unit::takeDamage(int damage) {
		this->hp -= damage;
	}

	void Unit::counterAttack(Unit* enemy) {
		if ( getState() == "Vampire") {
			ensureIsAlive(enemy);
			int dmg = this->getDamage() / 2;

			enemy->takeDamage(dmg);

			ensureIsAlive(enemy);

			enemy->addHpVamp(dmg);
			

			enemy->setHpZero();
		} else {
			int dmg = this->getDamage() / 2;

			enemy->takeDamage(dmg);

			enemy->setHpZero();
		}
	}

	void Unit::becomeWolf() {
		if (getState() == "Werewolf") {
			isWolf = true;
			hp *= 2;
			hpLimit *= 2;
			dmg *= 2;
		}
	}