#include "Unit.h"

void Unit::ensureIsAlive() {
   if ( hitPoints == 0 ) {
       throw UnitIsDead();
   }
}

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->name = name;
    this->hitPointsLimit = hp;
    this->damage = dmg;
    this->hitPoints = hp;
    // this->ensureIsAlive();
}

Unit::~Unit() {}

    int Unit::getDamage() const {
        return this->damage;
    }

    int Unit::getHitPoints() const {
        return this->hitPoints;
    }

    int Unit::getHitPointsLimit() const {
        return this->hitPointsLimit;
    }

    const std::string& Unit::getName() const {
        return this->name;
    }

    void Unit::addHitPoints(int hp) {
        ensureIsAlive();

        this->hitPoints += hp;

        if ( hitPoints > hitPointsLimit ) {
            hitPoints = hitPointsLimit;
        }
    }

    void Unit::takeDamage(int dmg) {
        ensureIsAlive();

        this->hitPoints -= dmg;
    }

    void Unit::attack(Unit& enemy) {
        ensureIsAlive();

        enemy.takeDamage(damage);

        if ( hitPoints <= 0 ) {
            throw UnitIsDead();
        } else {
            enemy.counterAttack(*this);
        }
    }

    void Unit::counterAttack(Unit& enemy) {
        int dmg = damage / 2;

        enemy.hitPoints -= dmg;
    }

    std::ostream& operator<<(std::ostream& out, const Unit& unit) {
        out << unit.getName() << " has : " << unit.getHitPoints() << '/' << unit.getHitPointsLimit();  
        out << "  and his/her damage is : " << unit.getDamage() << std::endl; 
        return out;
    } 