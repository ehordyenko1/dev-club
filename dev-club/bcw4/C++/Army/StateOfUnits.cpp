#include "StateOfUnits.hpp"
#include "Necromancer.hpp"

	StateOfUnits::StateOfUnits() {
		isWolf = false;
		PhyDamage = 0;
		MagicDamage = 0;
		hp = 0;
	}

	int StateOfUnits::getHP() const{
		return hp;
	}

	int StateOfUnits::getPhyDamage() const{
		return PhyDamage;
	}

	int StateOfUnits::getMagicDamage() const{
		return MagicDamage;
	}

	std::string StateOfUnits::getState() const{
		return state;
	}

	std::string StateOfUnits::getTypeOfDamage() const {
		return typeOfDamage;
	}

	
	void StateOfUnits::setHp(int hp) {
		this->hp = hp;
	}

	void StateOfUnits::setPhyDamage(int dmg)  {
		this->PhyDamage = dmg;
	}

	void StateOfUnits::setMagicDamage(int dmg) {
		this->MagicDamage = dmg;
	}

	void StateOfUnits::setState(std::string State) {
		this->state = State;
	}

	void StateOfUnits::setTypeOfDamage(std::string typeOfDamage) {
		this->typeOfDamage = typeOfDamage;
	}

	void StateOfUnits::checkHpZero(Unit* unit) {
		if ( this->hp <= 0) {
        	setHp(0);
			death->addBody(unit);
			unit->notify();
      	}
	}

	void StateOfUnits::addHP(int hp) {
		this->hp += hp;
	}

	void StateOfUnits::addDamage(int dmg) {
		this->PhyDamage += dmg;
	}

	void StateOfUnits::takeHp(int dmg) {
		this->hp -= dmg;
	}

	bool StateOfUnits::isAWolf() {
		return isWolf;
	}

	void StateOfUnits::changeWolf() {
		isWolf = true;
	}

	void StateOfUnits::setHpLimit(int hpLimit) {
		this->hpLimit = hpLimit;
	}

	int StateOfUnits::getHpLimit() {
		return hpLimit;
	}